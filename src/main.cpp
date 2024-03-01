#include <iostream>
#include <raylib.h>
#include "ball.h"
#include "paddle.h"
#include "ai.h"

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

    Ai ai;

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);
        if (CheckCollisionCircleRec(Vector2{ball.getBallX(), ball.getBallY()}, ball.getBallRadius(), Rectangle{paddle.getPosX(), paddle.getPosY(), paddle.getWidth(), paddle.getHeight()}))
        {
            ball.UpdateSpeedX();
        };

        if (CheckCollisionCircleRec(Vector2{ball.getBallX(), ball.getBallY()}, ball.getBallRadius(), Rectangle{ai.getPosX(), ai.getPosY(), ai.getWidth(), ai.getHeight()}))
        {
            ball.UpdateSpeedX();
        };

        ball.Draw();
        ball.Update();

        paddle.Draw();
        paddle.Update();

        ai.Draw();
        ai.Update(ball.getBallX(), ball.getBallY());

        EndDrawing();
    }

    CloseWindow();

    return 0;
}