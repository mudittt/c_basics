#include <stdio.h>

void topleft(int num)
{
    for (int i = 0; i <= num; i++)
    {
        printf(" \n");
        for (int j = 0; j < num - i; j++)
        {
            printf("* ");
        }
    }
}
void bottomleft(int nom)
{
    for (int i = 1; i < nom + 1; i++)
    {
        printf("\n");

        for (int j = 0; j < i; j++)
        {

            printf("* ");
        }
    }
}
void topright(int nim)
{
    for (int i = 0; i < nim; i++)
    {
        printf("\n");
        for (int k = 0; k < i; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < nim - i; j++)
        {
            printf("*");
        }
    }
}
void bottomright(int nam)
{
    for (int i = 0; i < nam; i++)
    {
        printf("\n");

        for (int j = 0; j < nam - i; j++)
        {

            printf(" ");
        }

        for (int k = 0; k < i; k++)
        {
            printf("*");
        }
    }
}
void main()
{
    int a, method;
    printf("enter the number of stars = ");
    scanf("%d", &a);
    printf("enter which pattern do you want? \n enter '1' for topleft star pattern \n enter '2' for topright star pattern \n enter '3' for bottomleft star pattern \n enter '4' for bottomlright star pattern");
    scanf("%d", &method);
    switch (method)
    {
        case 1:
            topleft(a);
            break;
        case 2:
            topright(a);
            break;
        case 3:
            bottomleft(a);
            break;
        case 4:
            bottomright(a);
            break;
        default:
            break;
    }
}
