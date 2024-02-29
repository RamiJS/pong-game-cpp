#include "paddle.h"
#include <raylib.h>

Paddle::Paddle()
{
    width = 20;
    height = 60;

    playerX = 10;
    playerY = (GetScreenHeight() / 2) - (height / 2);

    enemyX = GetScreenWidth() - width - 10;
    enemyY = (GetScreenHeight() / 2) - (height / 2);

    speedX = 10;
    speedY = 10;
};

void Paddle::Update()
{
    if (IsKeyDown(KEY_DOWN) && (playerY + height) < GetScreenHeight() - height)
    {
        playerY += speedY;
    }
    if (IsKeyDown(KEY_UP) && (playerY - height) >= 0)
        playerY -= speedY;
};

void Paddle::Draw()
{
    DrawRectangle(playerX, playerY, width, height, RED);
    DrawRectangle(enemyX, enemyY, width, height, RED);
};
