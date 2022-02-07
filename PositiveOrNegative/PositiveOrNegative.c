#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);

    if (a > 0){
        printf("Number is POSITIVE!");
    }
    else if (a==0){
        printf("neither Positive nor Negative!");
    }
    else{
        printf("Number is NEGATIVE!");
    }
    
    return 0;
}
