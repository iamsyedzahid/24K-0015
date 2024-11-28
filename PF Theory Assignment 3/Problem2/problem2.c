#include <stdio.h>
#include <stdlib.h>

struct Player {
    int ballScores[12];
    char playerName[50];
    int totalScore;
};

void validateScore(struct Player *p) {
    for (int i = 0; i < 12; i++)
    {        
        if (p->ballScores[i] < 0 || p->ballScores[i] > 6)
        {
            p->ballScores[i] = 0;
        }
    }
}

void playGame(struct Player *p, const char *playerName) {
    printf("Enter scores for %s:\n", playerName);
    for (int i = 0; i < 12; i++)
    {
        printf("Enter score for Ball %d: ", i + 1);
        scanf("%d", &p->ballScores[i]);
    }
}

void findWinner(struct Player p1, struct Player p2) {
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 12; i++)
    {
        sum1 += p1.ballScores[i];
        sum2 += p2.ballScores[i];
    }

    printf("\n Match Result \n");
    if (sum1 > sum2)
    {
        printf("Player 1 is the winner with %d runs!\n", sum1);
    }
    else if (sum2 > sum1)
    {
        printf("Player 2 is the winner with %d runs!\n", sum2);
    }
    else
    {
        printf("Woohoo, It's a tie! Both players scored %d runs.\n", sum1);
    }
}

void displayMatchScoreboard(struct Player p1, struct Player p2) {
    int sum1 = 0, sum2 = 0;

    printf("\n Player 1 Scoreboard \n");
    for (int i = 0; i < 12; i++)
    {
        printf("Ball %d: %d runs\n", i + 1, p1.ballScores[i]);
        sum1 += p1.ballScores[i];
    }
    printf("Total Score: %d | Average: %.2f\n", sum1, sum1 / 12.0);

    printf("\n Player 2 Scoreboard \n");
    for (int i = 0; i < 12; i++)
    {
        printf("Ball %d: %d runs\n", i + 1, p2.ballScores[i]);
        sum2 += p2.ballScores[i];
    }
    printf("Total Score: %d | Average: %.2f\n", sum2, sum2 / 12.0);
}

int main() {
    struct Player p1, p2;

    playGame(&p1, "Player 1");
    playGame(&p2, "Player 2");

    validateScore(&p1);
    validateScore(&p2);

    findWinner(p1, p2);
    displayMatchScoreboard(p1, p2);

    return 0;
}
