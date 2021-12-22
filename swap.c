#include<stdio.h>

void swap(int num1, int num2){
     num1 = num1*num2;
     num2 = num1/num2;
     num1 = num1/num2;
     
    printf("value of a is %d\n", num1);
    printf("value of b is %d\n", num2);

}


int main(int argc, char const *argv[])
{   
    int a, b;
    printf("enter a = ");
    scanf("%d", &a);
    printf("enter b = ");
    scanf("%d", &b);
    // int *ptra = &a;
    // int *ptrb = &b;
    printf("value of original a is %d\n", a);
    printf("value of original b is %d\n", b);

    swap(a, b);

   
    
    //  printf("a = %d\n", a);
    //  printf("b = %d", b);


    return 0;
}
