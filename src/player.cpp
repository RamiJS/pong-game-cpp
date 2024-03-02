#include "player.h"
#include <raylib.h>

Player::Player()
{
    width = 20;
    height = 60;

    posX = 10;
    posY = (GetScreenHeight() / 2) - (height / 2);

    speedX = 10;
    speedY = 10;
};

void Player::Update()
{
    if (IsKeyDown(KEY_DOWN) && (posY) < GetScreenHeight() - height)
    {
        posY += speedY;
    }
    if (IsKeyDown(KEY_UP) && posY > 0)
        posY -= speedY;
};

void Player::Draw()
{
    DrawRectangle(posX, posY, width, height, RED);
};
