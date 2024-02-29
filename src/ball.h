#pragma once

class Ball
{
public:
    Ball(int ww, int hh);
    void Update();
    void Draw();

private:
    int x;
    int y;
    int speedX;
    int speedY;
    int radius;
};