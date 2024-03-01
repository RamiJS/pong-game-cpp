class Ai
{
public:
    Ai();
    void Update(int ballX, int ballY);
    void Draw();
    float getPosX() { return posX; }
    float getPosY() { return posY; }
    float getWidth() { return width; }
    float getHeight() { return height; }

private:
    int posX;
    int posY;
    int speedX;
    int speedY;
    int width;
    int height;
    ;
};