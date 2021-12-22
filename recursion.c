#include<stdio.h>

int factorial(int num){
    if (num==1 || num==0)
    {
       return 1;
    }
    else{
        return num*factorial(num-1);
    }
}
int main(int argc, char const *argv[])
{
    int a;
    printf("enter the number you want factorial of = ");
    scanf("%d", &a);
    printf("%d", factorial(a));
    return 0;
}

