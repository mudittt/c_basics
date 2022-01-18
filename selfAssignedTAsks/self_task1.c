#include <stdio.h>

void tableUsingDoWhileLoop(int num)
{
    int i = 0;
    printf("the table of %d is as follows : \n", num);
    do
    {
        i = i + 1;

        printf("%d X %d = %d\n", num, i, num * i);
    } while (i < 10);
}
void tableUsingSimpleMethod(int num)
{

    printf("the table of the given number is \n");
    printf("%d * 1 = %d \n", num, num * 1);
    printf("%d * 2 = %d \n", num, num * 3);
    printf("%d * 3 = %d \n", num, num * 4);
    printf("%d * 4 = %d \n", num, num * 5);
    printf("%d * 5 = %d \n", num, num * 2);
    printf("%d * 6 = %d \n", num, num * 6);
    printf("%d * 7 = %d \n", num, num * 7);
    printf("%d * 8 = %d \n", num, num * 8);
    printf("%d * 9 = %d \n", num, num * 9);
    printf("%d * 10  = %d \n", num, num * 10);
}

void tableUsingWhileLoop(int num)
{
    int i = 0;
    printf("the table of %d is as follows : \n", num);
    while (i < 10)
    {
        i = i + 1;

        printf("%d X %d = %d\n", num, i, num * i);
    }
}
void tableUsingForLoop(int num)
{
    int i = 1;
    printf("the table of %d is as follows : \n", num);
    for (i = 1; i < 11; i++)
    {

        printf("%d X %d = %d\n", num, i, num * i);
    }
}

int main(int argc, char const *argv[])
{
    int num, a, b;
    printf("do you wanna see a multiplication table of any number?\n if YES, press 1 and if NO, press 2 : ");
    scanf("%d", &b);
    if (b == 1)
    {
        printf("okay then\n");
        printf("enter the number you want the table of, num = ");
        scanf("%d", &num);
        printf("enter 1 to find table of %d thorugh simple method\n", num);
        printf("enter 2 to find table of %d thorugh do_while loop\n", num);
        printf("enter 3 to find table of %d thorugh while loop\n", num);
        printf("enter 4 to find table of %d thorugh for loop\n", num);

        printf("which method did you choose? = ");
        scanf("%d", &a);
        switch (a)
        {
        case 1:
            printf("you have chosen simple method\n");
            tableUsingSimpleMethod(num);
            break;
        case 2:
            printf("you have chosen do_while method\n");
            tableUsingDoWhileLoop(num);
            break;
        case 3:
            printf("you have chosen while loop method\n");
            tableUsingWhileLoop(num);
            break;
        case 4:
            printf("you have chosen for loop method\n");
            tableUsingForLoop(num);
            break;
        default:
            printf("YOU HAVE NOT SELECTED ANY METHOD. GO TO HELL.");
        }
    }
    else
    {
        printf("bye then");
    }
    return 0;
}
