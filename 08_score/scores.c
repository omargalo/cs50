#include <stdio.h>
#include <cs50.h>

/* int main(void)
{
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    printf("Average: %f\n", (score1 + score2 + score3) / (float) 3);
} */

// Using an array to store the scores instead of separate variables

float average(int length, int numbers[]);

int main(void)
{
    const int NUM_SCORES = 3;
    int scores[NUM_SCORES];

    for (int i = 0; i < NUM_SCORES; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", average(NUM_SCORES, scores));
}

float average(int length, int numbers[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += numbers[i];
    }
    return (float) sum / length;
}