#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int player, computer;
    int player_score = 0, computer_score = 0;
    char play_again;

    srand(time(0));

    do
    {
        printf("\n0 = Rock, 1 = Paper, 2 = Scissors\n");
        printf("Enter your choice: ");
        scanf("%d", &player);

        computer = rand() % 3;

        printf("Computer chose: %d\n", computer);

        if (player == computer)
        {
            printf("Draw!\n");
        }
        else if ((player == 0 && computer == 2) ||
                 (player == 1 && computer == 0) ||
                 (player == 2 && computer == 1))
        {
            printf("You Win!\n");
            player_score++;
        }
        else if (player >= 0 && player <= 2)
        {
            printf("You Lose!\n");
            computer_score++;
        }
        else
        {
            printf("Invalid input!\n");
        }

        printf("Score -> You: %d | Computer: %d\n", player_score, computer_score);

        printf("Play again? (y/n): ");
        scanf(" %c", &play_again);

    } while (play_again == 'y' || play_again == 'Y');

    return 0;
}
