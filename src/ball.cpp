#include "ball.h"
#include <raylib.h>
#include <iostream>

Ball::Ball(int scrWidth, int scrHeight)
{
    x = scrWidth / 2;
    y = scrHeight / 2;
    speedX = 5;
    speedY = 5;
    radius = 15;
}

void Ball::Update()
{
    x += speedX;
    y += speedY;

    if (x + radius >= GetScreenWidth() || x - radius <= 0)
        speedX *= -1;

    if (y + radius >= GetScreenHeight() || y - radius <= 0)
        speedY *= -1;
}

void Ball::Draw()
{
    DrawCircle(x, y, radius, WHITE);
}

float Ball::getBallX()
{
    return x;
}
float Ball::getBallY()
{
    return y;
}
float Ball::getBallRadius()
{
    return radius;
}

void Ball::UpdateSpeedX()
{
    speedX *= -1;
};

void Ball::ResetBall(int scrWidth, int scrHeight)
{
    x = GetScreenWidth() / 2;
    y = GetScreenHeight() / 2;

    int random[2] = {-1, 1};
    speedX *= random[GetRandomValue(0, 1)];
    speedY *= random[GetRandomValue(0, 1)];

    std::cout << random[GetRandomValue(0, 1)];
    std::cout << speedX;
}