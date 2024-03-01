class Ball
{
public:
    Ball(int scrWidth, int scrHeight);
    void Update();
    void Draw();
    float getBallX();
    float getBallY();
    float getBallRadius();
    void UpdateSpeedX();

private:
    float x;
    float y;
    int speedX;
    int speedY;
    float radius;
};