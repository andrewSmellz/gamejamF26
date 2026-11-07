#include "raylib.h"

int main() {
    InitWindow(800, 450, "raylib");
    SetTargetFPS(60);
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Hello raylib", 190, 200, 20, DARKGRAY);
        EndDrawing();
    }
    CloseWindow();
}