#include <stdio.h>
#include <stdlib.h>

int avg(int a, int b)
{
    return (a + b) / 2;
}

void goodAfternoon(int (*fptr)(int, int), int a, int b)
{
    printf("Good Afternoon User\n");
    printf("The avg of %d and %d is %d\n", a, b, fptr(a, b));
}

void goodEvening(int (*fptr)(int, int), int a, int b)
{
    printf("Good Evening User\n");
    printf("The avg of %d and %d is %d\n", a, b, fptr(a, b));
}

int main()
{
    int n1, n2;
    int (*ptr)(int, int);
    ptr = avg;
    printf("Enter a num : ");
    scanf("%d", &n1);
    printf("Enter another num : ");
    scanf("%d", &n2);
    goodAfternoon(ptr, n1, n2);
    return 0;
}