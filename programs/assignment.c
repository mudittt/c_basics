#include <stdio.h>

int main(int argc, char const *argv[]) 
{
    int num;
    printf("enter the number you want the table of, num = ");
    scanf("%d", &num);

    printf("the table of the given number is \n");
    printf("%d * 1 = %d \n", num, num * 1);
    printf("%d * 2 = %d \n", num, num * 3);
    printf("%d * 3 = %d \n", num, num * 4);
    printf("%d * 4 = %d \n", num, num * 5);
    printf("%d * 5 = %d \n", num, num * 2);
    printf("%d * 6 = %d \n", num, num * 6);
    printf("%d * 7 = %d \n", num, num * 7);
    printf("%d * 8 = %d \n", num, num * 8);
    printf("%d * 9 = %d \n", num, num * 9);
    printf("%d * 10  = %d \n", num, num * 10);

    return 0;
}