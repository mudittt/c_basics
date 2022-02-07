#include<stdio.h>
int main()
{
    int a=3, b=2;
    printf("addition : %d\n", a+b);
    printf("subtraction : %d\n", a-b);
    printf("division : %d\n", a/b);
    printf("remainder : %d\n", a%b);
    printf("multiplication : %d\n", a*b);
    printf("incrementation : a = %d -> %d and b = %d -> %d\n", a++, a, b++, b);
    printf("decrementation : a = %d -> %d, b = %d -> %d", a--, a, b--, b );
    return 0;
}
