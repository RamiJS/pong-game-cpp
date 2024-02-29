#pragma once

class Ball
{
public:
    Ball(int scrWidth, int scrHeight);
    void Update();
    void Draw();

private:
    int x;
    int y;
    int speedX;
    int speedY;
    int radius;
};