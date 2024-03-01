#include "paddle.h"
#include <raylib.h>

Paddle::Paddle()
{
    width = 20;
    height = 60;

    posX = 10;
    posY = (GetScreenHeight() / 2) - (height / 2);

    speedX = 10;
    speedY = 10;
};

void Paddle::Update()
{
    if (IsKeyDown(KEY_DOWN) && (posY + height) < GetScreenHeight() - height)
    {
        posY += speedY;
    }
    if (IsKeyDown(KEY_UP) && (posY - height) >= 0)
        posY -= speedY;
};

void Paddle::Draw()
{
    DrawRectangle(posX, posY, width, height, RED);
};
