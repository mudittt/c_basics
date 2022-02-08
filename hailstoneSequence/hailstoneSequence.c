#include <stdio.h>

int hailStone(int n)
{
    if (n == 1)
    {
        printf("%d", n);
    }

    else if (n % 2 == 0)
    {
        printf("%d\n", n);
        return hailStone(n / 2);
    }
    else
    {
        return hailStone((n * 3) + 1);
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter a number to start with -> ");
    scanf("%d", &n);

    printf("function is working..\n\n");
    hailStone(n);
    return 0;
}
