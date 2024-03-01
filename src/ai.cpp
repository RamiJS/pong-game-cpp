#include "ai.h"
#include <raylib.h>
#include <iostream>
Ai::Ai()
{
    width = 20;
    height = 60;

    posX = GetScreenWidth() - width - 10;
    posY = (GetScreenHeight() / 2) - (height / 2);

    speedX = 10;
    speedY = 10;
};

void Ai::Update(int ballX, int ballY)
{
    if (posY + height / 2 > ballY && ballX > GetScreenWidth() / 2)
    {
        posY -= speedY;
    }

    if (posY + height / 2 <= ballY && ballX > GetScreenWidth() / 2)
    {
        posY += speedY;
    }
}

void Ai::Draw()
{
    DrawRectangle(posX, posY, width, height, ORANGE);
}