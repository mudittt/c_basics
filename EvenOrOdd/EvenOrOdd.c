#include<stdio.h>


int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    
    if (a%2 == 0)
    {
        printf("entered number %d is EVEN ! \n", a);
    }
    else
    {
       printf("entered number %d is ODD ! \n", a);  
    }
    
    return 0;
}

