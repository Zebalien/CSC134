/*******************************************************************************************
*
*   raylib [core] examples - basic screen manager
*
*   NOTE: This example illustrates a very simple screen manager based on a states machines
*
*   Example originally created with raylib 4.0, last time updated with raylib 4.0
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2021-2023 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"
//csc 134
//m4t3-raylib
//Kasprak
//10-14-24

//------------------------------------------------------------------------------------------
// Types and Structures Definition
//------------------------------------------------------------------------------------------
typedef enum GameScreen { LOGO = 0, TITLE, GAMEPLAY, ENDING } GameScreen;

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1950;
    const int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic screen manager");

    GameScreen currentScreen = LOGO;

    // TODO: Initialize all required variables and load all required data here!

    int framesCounter = 0;          // Useful to count frames

    SetTargetFPS(60);               // Set desired framerate (frames-per-second)
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        switch(currentScreen)
        {
            case LOGO:
            {
                // TODO: Update LOGO screen variables here!

                framesCounter++;    // Count frames

                // Wait for 2 seconds (120 frames) before jumping to TITLE screen
                if (framesCounter > 120)
                {
                    currentScreen = TITLE;
                }
            } break;
            case TITLE:
            {
                // TODO: Update TITLE screen variables here!

                // Press enter to change to GAMEPLAY screen
                if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
                {
                    currentScreen = GAMEPLAY;
                }
            } break;
            case GAMEPLAY:
            {
                // TODO: Update GAMEPLAY screen variables here!

                // Press enter to change to ENDING screen
                if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
                {
                    currentScreen = ENDING;
                }
            } break;
            case ENDING:
            {
                // TODO: Update ENDING screen variables here!

                // Press enter to return to TITLE screen
                if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
                {
                    currentScreen = TITLE;
                }
            } break;
            default: break;
        }
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            switch(currentScreen)
            {
                case LOGO:
                {
                    // TODO: Draw LOGO screen here!
                    DrawText("LOGO SCREEN", 20, 20, 40, LIGHTGRAY);
                    DrawText("WAIT for 2 SECONDS...", 290, 220, 20, GRAY);

                } break;
                case TITLE:
                {
                    // TODO: Draw TITLE screen here!
                    DrawRectangle(0, 0, screenWidth, screenHeight, RED);
                    
                    DrawText("Raylib invaders", 20, 20, 40, DARKGREEN);
                    DrawText("PRESS ENTER or TAP to JUMP to GAMEPLAY SCREEN", 120, 220, 20, DARKGREEN);

                } break;
                case GAMEPLAY:
                {
                    // TODO: Draw GAMEPLAY screen here!
                    DrawRectangleGradientV(0, 0, screenWidth, screenHeight/2, BLACK, DARKBLUE);
                    
                    DrawRectangleGradientV(0, screenHeight/2, screenWidth, screenHeight, DARKBLUE, WHITE);
                    //ground
                    DrawRectangleGradientV(0, screenHeight-100, screenWidth, screenHeight, GREEN, DARKGREEN);
                    //player
                    DrawRectangle (screenWidth/2, screenHeight-90, 40, 40, PURPLE);
                    //DrawText("GAMEPLAY SCREEN", 20, 20, 40, DARKBLUE);
                    //DrawText("PRESS ENTER or TAP to JUMP to ENDING SCREEN", 130, 220, 20, DARKBLUE);
                    int lowest_height=screenHeight*.66;
                    int width=60; // size of box
                    int height=40;
                    int spacing_x=20; // distance apart
                    int spacing_y=40;
                    Color color=LIGHTGRAY;
                    int posX=0;
                    int posY=0;
                    for (int y=0; y<lowest_height; y += height+spacing_y){
                        for (int x=0; x<screenWidth; x+= width+spacing_x){
                            posX=x;
                        posY=y;
                        DrawRectangle (posX, posY, width, height, color);
                        }
                    }

                } break;
                case ENDING:
                {
                    // TODO: Draw ENDING screen here!
                    DrawRectangle(0, 0, screenWidth, screenHeight, BLUE);
                    DrawText("ENDING SCREEN", 20, 20, 40, PURPLE);
                    DrawText("PRESS ENTER or TAP to RETURN to TITLE SCREEN", 120, 220, 20, PURPLE);

                } break;
                default: break;
            }

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------

    // TODO: Unload all loaded data (textures, fonts, audio) here!

    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
