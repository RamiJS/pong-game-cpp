class Player
{
public:
    Player();
    void Update();
    void Draw();
    float getPosX() { return posX; }
    float getPosY() { return posY; }
    float getWidth() { return width; }
    float getHeight() { return height; }

protected:
    float posX;
    float posY;
    int speedX;
    int speedY;
    float width;
    float height;
    ;
};