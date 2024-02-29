#include <iostream>
#include <raylib.h>
#include "ball.h"

using namespace std;

void MoveBall(int &x, int &y, int r, int &sX, int &sY)
{

    x += sX;
    y += sY;

    if (x + r >= GetScreenWidth() || x - r <= 0)
    {
        sX *= -1;
    }
    if (y + r >= GetScreenHeight() || y - r <= 0)
    {
        sY *= -1;
    }
};

int main()
{

    const int sWidth = 1280;
    const int sHeight = 800;
    const int sRadius = 15;

    int x = sWidth / 2;
    int y = sHeight / 2;

    int speedX = 5;
    int speedY = 5;

    InitWindow(sWidth, sHeight, "PONG PONG PONG");
    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);
        DrawCircle(x, y, sRadius, RED);
        MoveBall(x, y, sRadius, speedX, speedY);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}