#include <iostream>
#include <raylib.h>
#include "ball.h"

using namespace std;

int main()
{

    // init raylib window
    const int scrWidth = 1280;
    const int scrHeight = 800;
    InitWindow(scrWidth, scrHeight, "PONG PONG PONG");
    SetTargetFPS(60);

    // call ball constructor
    Ball ball(scrWidth / 2, scrHeight / 2);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);

        ball.Draw();
        ball.Update();

        EndDrawing();
    }

    CloseWindow();

    return 0;
}