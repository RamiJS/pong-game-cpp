#include <iostream>
#include <raylib.h>
#include "ball.h"
#include "paddle.h"

using namespace std;

int main()
{

    // init raylib window
    const int scrWidth = 1280;
    const int scrHeight = 800;
    InitWindow(scrWidth, scrHeight, "PONG PONG PONG");
    SetTargetFPS(60);

    // call ball constructor
    Ball ball(scrWidth, scrHeight);

    Paddle paddle;

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);

        ball.Draw();
        ball.Update();

        paddle.Draw();
        paddle.Update();

        EndDrawing();
    }

    CloseWindow();

    return 0;
}