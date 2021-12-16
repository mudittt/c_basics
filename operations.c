#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf("enter a = ");
    scanf("%d", &a);

    printf("enter b = ");
    scanf("%d", &b);

    printf("the sum of the above numbers is %d\n", a + b);
    printf("the product of the above numbers is %d \n ", a * b);
    printf("a/b is %d \n", a / b);
    printf("a-b is %d \n", a - b);
    

    printf("& is %d \n", a & b);
    printf("^ is %d \n" , a^b);
    printf("| is %d \n", a|b);
    return 0;
}
