#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, i = 0;
    printf("enter the last natural number (num) = ");
    scanf("%d", &num);
    do
    {
        i = i + 1;
        printf("%d\n", i);
    } while (i < num);

    return 0;
}
