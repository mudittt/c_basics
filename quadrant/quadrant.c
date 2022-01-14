#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x, y;
    printf("Énter the x coordinate of the point : ");
    scanf("%d", &x);
    printf("Énter the y coordinate of the point : ");
    scanf("%d", &y);

    if (x > 0 && y > 0)
    {
        printf("First quad \n");
    }
    else if (x > 0 && y < 0)
    {
        printf("Fourth quad \n");
    }
    else if (x < 0 && y < 0)
    {
        printf("Third quad \n");
    }
    else
    {
        printf("Second quad \n");
    }

    return 0;
}
