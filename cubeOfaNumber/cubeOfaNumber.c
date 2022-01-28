#include <stdio.h>
#include <math.h>

int CubeFinder(int a)
{
    return (pow(a, 3));
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number to find it's cube : ");
    scanf("%d", &n);
    printf("cube is : %d", CubeFinder(n));
    return 0;
}
