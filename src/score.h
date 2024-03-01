class Score
{
public:
    Score();
    int getPlayerScore() { return playerScore; };
    int getAiScore() { return aiScore; };
    void UpdatePlayerScore();
    void UpdateAiScore();

private:
    int playerScore;
    int aiScore;
};