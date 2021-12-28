#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static int tempA, tempB;
void main_work(int *ptrA, int *ptrB)
{
    if (*ptrA == *ptrB + 1)
    {
        printf("\nIt's a TIE!!!\n");
        printf("Your Points : %d\nComputer's Points : %d\n", tempA + 1, tempB + 1);
        printf("You're both given a point. \n");
        tempA++;
        tempB++;
        printf("\n******************************************************\n");
    }
    else if (*ptrA == 1 && *ptrB + 1 == 2)
    {
        printf("\nYou LOST :( \n");
        printf("Your Points : %d\nComputer's Points : %d\n", tempA, tempB + 1);
        tempB++;
        printf("\n******************************************************\n");
    }
    else if (*ptrA == 1 && *ptrB + 1 == 3)
    {
        printf("\nYou WOOOOOONNNNNNN!!!!\n");
        printf("Your Points : %d\nComputer's Points : %d\n", tempA + 1, tempB);
        tempA++;
        printf("\n******************************************************\n");
    }
    else if (*ptrA == 2 && *ptrB + 1 == 1)
    {
        printf("\nYou LOST :( \n");
        printf("Your Points : %d\nComputer's Points : %d\n", tempA, tempB + 1);
        tempB++;
        printf("\n******************************************************\n");
    }
    else if (*ptrA == 2 && *ptrB + 1 == 3)
    {
        printf("\nYou WOOOOOONNNNNNN!!!\n");
        printf("Your Points : %d\nComputer's Points : %d\n", tempA + 1, tempB);
        tempA++;
        printf("\n******************************************************\n");
    }
    else if (*ptrA == 3 && *ptrB + 1 == 2)
    {
        printf("\nYou WOOOOOONNNNNNN!!!\n");
        printf("Your Points : %d\nComputer's Points : %d\n", tempA + 1, tempB);
        tempA++;
        printf("\n******************************************************\n");
    }
    else if (*ptrA == 3 && *ptrB + 1 == 1)
    {
        printf("\nYou LOST :( \n");
        printf("Your Points : %d\nComputer's Points : %d\n", tempA, tempB + 1);
        tempB++;
        printf("\n******************************************************\n");
    }
}
void final_result(int *marksA, int *marksB)
{

    if (*marksA > *marksB)
    {
        printf("\n\n\n\nAfter those 3 rounds of this game YYYYOOUUUUU WOOOOOONNNNNNN!!!!!\n\n");
    }
    else if (*marksA < *marksB)
    {
        printf("\n\n\n\nAfter those 3 rounds of this game YOU LOST. LOOOOSSEEERRRRR!!!\n\n");
    }
    else
    {
        printf("\n\n\n\nIt's a TIE !. play again! \n\n");
    }
}

int main()
{
    int your_choice, CPU_choice;

    printf("\n\n\n\n\n                 WELCOME TO THIS GAME WHICH IS MADE BY A LEGEND!!!!!!!\n\n");
    printf("                    THIS IS A GAME OF ROCK, PAPER AND SCISSORS !!!!!!!\n");

    for (int i = 0; i < 3; i++)
    {

        printf("Enter 1 for rock. \nEnter 2 for paper. \nEnter 3 for scissors. \nWrite your choice here : ");
        scanf("%d", &your_choice);

        if (your_choice == 1)
        {
            printf("\nYou've chosen rock\n");
        }
        else if (your_choice == 2)
        {
            printf("\nYou've chosen paper\n");
        }
        else if (your_choice == 3)
        {
            printf("\nYou've chosen scissors\n");
        }
        else
        {
            printf("\ninvalid input\n");
        }

        srand(time(NULL));
        CPU_choice = rand() % 3;
        if (your_choice == 1 || your_choice == 2 || your_choice == 3)
        {
            if (CPU_choice == 0)
            {
                printf("\nComputer chose rock\n\n");
            }
            else if (CPU_choice == 1)
            {
                printf("\nComputer chose paper\n\n");
            }
            else if (CPU_choice == 2)
            {
                printf("\nComputer chose scissors\n\n");
            }

            main_work(&your_choice, &CPU_choice);
        }
        else
        {
            printf("game over kid. enter a valid input to play\n\n\n");
        }
    }
    final_result(&tempA, &tempB);

    return 0;
}
