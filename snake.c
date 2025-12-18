#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int user, computer;

    // Seed random number generator
    srand(time(0));

    printf("Snake Water Gun Game\n");
    printf("Choose:\n");
    printf("1. Snake\n");
    printf("2. Water\n");
    printf("3. Gun\n");
    printf("Enter your choice: ");
    scanf("%d", &user);

    // Computer choice (1 to 3)
    computer = (rand() % 3) + 1;

    // Display user choice
    if (user == 1)
        printf("You chose Snake\n");
    else if (user == 2)
        printf("You chose Water\n");
    else if (user == 3)
        printf("You chose Gun\n");
    else
    {
        printf("Invalid choice!\n");
        return 0;
    }

    // Display computer choice
    if (computer == 1)
        printf("Computer chose Snake\n");
    else if (computer == 2)
        printf("Computer chose Water\n");
    else
        printf("Computer chose Gun\n");

    // Game rules
    if (user == computer)
        printf("It's a Draw!\n");
    else if ((user == 1 && computer == 2) || // Snake drinks Water
             (user == 2 && computer == 3) || // Water damages Gun
             (user == 3 && computer == 1))   // Gun kills Snake
        printf("You Win!\n");
    else
        printf("Computer Wins!\n");

    return 0;
}