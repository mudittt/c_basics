#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*int random_num(int n)
{

    srand(time(NULL));
    return rand() % n;
}
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("A random number generated between 0 and %d is %d", a, random_num(a));

    return 0;
}
*/

/* GAME */

int main()
{   
    int choice, computers_choice, *ptr, random;
    printf("THIS IS A GAME OF ROCK, PAPER, SCISSOR !!!!!!!!\n\n\n\n");
    printf("Enter '0' for choosing rock : \n");
    printf("Enter '1' for choosing scissor : \n");
    printf("Enter '2' for choosing paper : ");
    scanf("%d", &choice);
    printf("wait! let your oppoent choose : ");
    
    srand(time(NULL));
    random = rand()%3;
    ptr = &random;
    printf("%d\n", *ptr);

    if (rand()%3 == choice)
    {
        printf("oops it's a tie. run the program  again");
    }
    else if (*ptr == 2 && choice == 1 ){
        printf("The opponent chose paper and you chose scissor. YOOOUUUUU WWWOOOOOOOONNNN!!!!!\n");
    }
    else if (*ptr == 2 && choice == 0 ){
        printf("The opponent chose paper and you chose rock. YOU LOST :( \n");
    }
    else if (*ptr == 1 && choice == 0 ){
        printf("The opponent chose scissor and you chose rock. YOOOUUUUU WWWOOOOOOOONNNN!!!!!\n");
    }
    else if (*ptr == 1 && choice == 2 ){
        printf("The opponent chose scissor and you chose paper. YOU LOST :( \n");
    }
    else if (*ptr == 0 && choice == 2 ){
        printf("The opponent chose rock and you chose paper. YOOOUUUUU WWWOOOOOOOONNNN!!!!!");
    }
    else if (*ptr == 0 && choice == 1 ){
        printf("The opponent chose rock and you chose scissor. YOU LOST :( \n");
    }
    
    
    
    
    
    return 0;
}
