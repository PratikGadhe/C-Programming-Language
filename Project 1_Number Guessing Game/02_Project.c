#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;

    // Print the random number
    // printf("Random number between 1 and 100: %d\n", random_number);

    int guess;
    int no_of_guess = 0;
    do
    {
        printf("Guess The Number:");
        scanf("%d", &guess);
        if (guess > random_number)
        {
            printf("Guess Lower Number Please\n");
        }
        else
        {
            printf("Guess Higher Number please\n");
        }
        no_of_guess++;
    } while (guess != random_number);
    printf("Bravo You guessed the number\n");
    printf("Your guesse %d", no_of_guess);

    return 0;
}
