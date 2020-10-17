#include <nusys.h>
#include <math.h>
#include "common.h"
#include "game.h"
#include "graphics.h"
#include "camera.h"
#include "easing.h"
#include "object.h"
#include "part.h"

#include "models/bun.h"
#include "models/patty.h"
#include "models/cheese.h"
#include "models/lettuce.h"
#include "models/tomato.h"
#include "models/onion.h"

#define CAMERA_BASE_Y 300
#define MAX_PARTS 500
#define PART_QUEUE_LENGTH 3

extern NUContData controller[1];

static bool paused = FALSE;

static Object bottom_bun;
static Object top_bun;

static Part current_part;
static Part parts[MAX_PARTS];
static Part part_queue[PART_QUEUE_LENGTH];

static u32 part_count = 0;
static u32 current_y = 0;
static bool bun_placed = FALSE;

static EasingF camera_y;

// Generate the next random burger part.
// Doesn't allow the next part to be a dupe of any of the parts in the queue.
static Part get_next_part() {
  Part part;
  int i;
  bool retry;

  part.x = 0;

  do {
    retry = FALSE;
    part.ingredient = rand() % TOTAL_PARTS;
    for (i = 0; i < PART_QUEUE_LENGTH; i++) {
      if (part_queue[i].ingredient == part.ingredient) {
        retry = TRUE;
        break;
      }
    }
  } while (retry);

  switch (part.ingredient) {
    case MEAT:
      part.height = 40;
      part.size = 400;
      part.mass = 1;
      break;
    case CHEESE:
      part.height = 20;
      part.size = 320;
      part.mass = 0.5f;
      break;
    case LETTUCE:
      part.height = 40;
      part.size = 400;
      part.mass = 0.25f;
      break;
    case ONION:
      part.height = 20;
      part.size = 246;
      part.mass = 0.5f;
      break;
    case TOMATO:
      part.height = 20;
      part.size = 246;
      part.mass = 0.5f;
      break;
    default:
      break;
  }

  vec3f_set(part.obj.pos, 0, 0, 0);
  vec3f_set(part.obj.rot, 0, rand() % 360, 0);
  vec3f_set(part.obj.vel, 0, 0, 0);
  part.obj.scale = 1;

  return part;
}

static void update_part_queue() {
  int i;

  current_part = part_queue[PART_QUEUE_LENGTH - 1];

  for (i = 0; i < PART_QUEUE_LENGTH; i++) {
    if (i + 1 <= PART_QUEUE_LENGTH - 1) {
      part_queue[i + 1] = part_queue[i];
    }
  }
  part_queue[0].ingredient = -1;
  part_queue[0] = get_next_part();
}

static void place_current_part() {
  current_y += current_part.height;
  easing_init(camera_y, &camera.pos.y, 0.2, camera.pos.y, CAMERA_BASE_Y + current_y, easing_linear_f);
  easing_play(camera_y);
  parts[part_count++] = current_part;
  update_part_queue();
  current_part.obj.pos.y = current_y;
}

static void place_bun() {
  current_y += current_part.height;
  top_bun.pos.y = current_y;
  bun_placed = TRUE;
}

void game_init(void) {
  int i;

  // Reset some variables
  part_count = 0;
  current_y = 0;
  bun_placed = FALSE;

  // Initialize camera
  camera_init();
  camera_y.val = CAMERA_BASE_Y;
  camera.pos.y = CAMERA_BASE_Y;

  // Clear out random part queue
  for (i = 0; i < PART_QUEUE_LENGTH; i++) {
    part_queue[i].ingredient = -1;
  }

  // Fill up the random part queue
  for (i = 0; i < PART_QUEUE_LENGTH; i++) {
    part_queue[i] = get_next_part();
  }

  // Initialize objects
  vec3f_set(bottom_bun.pos, 0, 0, 0);
  vec3f_set(bottom_bun.rot, 0, rand() % 360, 0);
  vec3f_set(bottom_bun.vel, 0, 0, 0);
  bottom_bun.scale = 1;

  vec3f_set(top_bun.pos, 0, 0, 0);
  vec3f_set(top_bun.rot, 180, rand() % 360, 0);
  vec3f_set(top_bun.vel, 0, 0, 0);
  top_bun.scale = 1;
}

void game_update(double dt) {
  // Check for a pause button press
  if (controller[0].trigger & START_BUTTON) {
    paused = !paused;
  }

  if (paused || bun_placed) {
    return;
  }

  if (controller[0].trigger & A_BUTTON) {
    place_current_part();
  }

  if (controller[0].trigger & B_BUTTON) {
    place_bun();
  }

  if (camera_y.playing) {
    easing_update(camera_y, dt);
  }
}

void game_draw(void) {
  int i;
  MVP* mvpp = &mvp[task_num];
  glistp = &glist[task_num][0];

  graphics_init_RCP();
  graphics_clear(0, 0, 0);

  camera_look(mvpp);

  // Draw things
  // Bottom bun
  graphics_draw_object(&bottom_bun, bun_Cube_mesh, FALSE);

  for (i = 0; i < part_count; i++) {
    switch (parts[i].ingredient) {
      case MEAT:
        graphics_draw_object(&parts[i].obj, patty_Cube_mesh, FALSE);
        break;

      case CHEESE:
        graphics_draw_object(&parts[i].obj, cheese_Cube_mesh, FALSE);
        break;

      case LETTUCE:
        graphics_draw_object(&parts[i].obj, lettuce_Cube_mesh, FALSE);
        break;

      case ONION:
        graphics_draw_object(&parts[i].obj, onion_Cube_mesh, FALSE);
        break;

      case TOMATO:
        graphics_draw_object(&parts[i].obj, tomato_Cube_mesh, FALSE);
        break;
    }
  }

  // Top bun
  if (bun_placed) {
    graphics_draw_object(&top_bun, bun_Cube_mesh, FALSE);
  }

  gDPFullSync(glistp++);
  gSPEndDisplayList(glistp++);

  nuGfxTaskStart(
    &glist[task_num][0],
    (s32)(glistp - glist[task_num]) * sizeof(Gfx),
    NU_GFX_UCODE_F3DEX,
    NU_SC_SWAPBUFFER
  );

  task_num++;
  task_num %= MAX_TASKS;
}
