#include <stdio.h>
int fibb(int num)
{
    if (num == 0)
    {
        return num;
    }else if(num==1) {
        return num;
    }
    else
    {
        return fibb(num - 1) + fibb(num - 2);
    }
}
int main(int argc, char const *argv[])
{
    int a;
    printf("enter the number of elements you want of fibbonacci series = ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("%d\n", fibb(i));

    }
    
    

    return 0;
}
