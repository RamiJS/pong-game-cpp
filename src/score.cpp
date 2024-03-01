#include "score.h"

Score::Score()
{

    playerScore = 0;
    aiScore = 0;
};

void Score::UpdatePlayerScore()
{
    playerScore++;
}

void Score::UpdateAiScore()
{
    aiScore++;
}
