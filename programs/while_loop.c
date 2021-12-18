#include<stdio.h>

void main(int argc, char const *argv[])
{
    int i;
    printf("enter i = ");
    scanf("%d", &i);
    while(i>-10){
        printf("%d\n", i-1);
        i=i-1;
    }
    
}
