#include <stdio.h>

void swap(int *num1, int *num2)
{   // passing the value of num1 to temp,
    // value of num2 to num1.
    // value of temp to num2
    int temp=*num1;
    *num1=*num2;
    *num2=temp;

}

int main(int argc, char const *argv[])
{
    int a, b;
    printf("enter a = ");
    scanf("%d", &a);
    printf("enter b = ");
    scanf("%d", &b);
    printf("value of original a is %d\n", a);
    printf("value of original b is %d\n", b);

    swap(&a, &b);

    printf("a = %d\n", a);
    printf("b = %d", b);

    return 0;
}
