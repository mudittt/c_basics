#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{
    int num1, num2;
    printf("Enter first num :  ");
    scanf("%d", &num1);
    printf("Enter second num :  ");
    scanf("%d", &num2);
    // printf("The sum of the numbers are %d\n", sum(num1, num2));

    int (*ptr) (int p, int q);  /* declaring a function pointer */
    ptr = &sum;    /* creating a function pointer */
    int haha = (*ptr)( num1, num2);   /* {ptr ~ sum} */ /* dereferencing a function pointer */
    printf("%d", haha);
    return 0;
}
