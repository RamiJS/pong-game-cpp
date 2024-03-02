#include <iostream>
#include <raylib.h>
#include "ball.h"
#include "player.h"
#include "ai.h"
#include "score.h"

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

    Player player;

    Ai ai;

    Score score;

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);

        DrawText(TextFormat("%i", score.getPlayerScore()), GetScreenWidth() / 4, 20, 42, WHITE);
        DrawText(TextFormat("%i", score.getAiScore()), (GetScreenWidth() / 4) * 3, 20, 42, WHITE);

        if (CheckCollisionCircleRec(Vector2{ball.getBallX(), ball.getBallY()}, ball.getBallRadius(), Rectangle{player.getPosX(), player.getPosY(), player.getWidth(), player.getHeight()}))
        {
            ball.UpdateSpeedX();
        };

        if (CheckCollisionCircleRec(Vector2{ball.getBallX(), ball.getBallY()}, ball.getBallRadius(), Rectangle{ai.getPosX(), ai.getPosY(), ai.getWidth(), ai.getHeight()}))
        {
            ball.UpdateSpeedX();
        };

        ball.Draw();
        ball.Update();

        player.Draw();
        player.Update();

        ai.Draw();
        ai.Update(ball.getBallX(), ball.getBallY());

        if (ball.getBallX() - ball.getBallRadius() <= 0)
        {
            score.UpdateAiScore();
            ball.ResetBall(scrWidth, scrHeight);
        }
        if (ball.getBallX() + ball.getBallRadius() >= GetScreenWidth())
        {
            score.UpdatePlayerScore();
            ball.ResetBall(scrWidth, scrHeight);
        }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
