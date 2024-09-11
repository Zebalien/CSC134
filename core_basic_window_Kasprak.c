/*******************************************************************************************
*
*   raylib [core] example - Basic window
*
*   Welcome to raylib!
*
*   To test examples, just press F6 and execute raylib_compile_execute script
*   Note that compiled executable is placed in the same folder as .c file
*
*   You can find all basic examples on C:\raylib\raylib\examples folder or
*   raylib official webpage: www.raylib.com
*
*   Enjoy using raylib. :)
*
*   Example originally created with raylib 1.0, last time updated with raylib 1.0
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2013-2023 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(WHITE);

          
            // trying to make steam logo
             DrawCircleGradient(screenWidth/2, 200, 200, DARKBLUE, BLACK);
             DrawCircle(screenWidth/2.3, 290, 70, WHITE);
             DrawCircle(screenWidth/2.3, 290, 50, DARKBLUE);
             DrawCircle(screenWidth/2.3, 290, 40, WHITE);
             DrawRectangle(screenWidth/4*2 - 200, 250, 150, 70, WHITE);
             DrawRectangle(screenWidth/4*2 - 75, 130, 70, 110, WHITE);
             DrawCircle(screenWidth/2.1, 110, 70, WHITE);
             DrawCircle(screenWidth/2.1, 110, 50, DARKBLUE);
             DrawCircle(screenWidth/2.1, 110, 40, WHITE);
             

            

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}