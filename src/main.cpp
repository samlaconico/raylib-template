#include "raylib.h"
#include "raymath.h"

int main(void) { 
    InitWindow(1280, 720, RAYLIB_VERSION);

    while (!WindowShouldClose()) {
        BeginDrawing();

            DrawText("template", 100, 100, 20, BLACK);
            ClearBackground(LIGHTGRAY);
    
        EndDrawing();
    }
    
    CloseWindow();
    
    return 0;
}