#include <stdio.h>

void main()
{
    int a;
    int* ptr = &a;
    printf("enter the value of a = ");
    scanf("%d", &a);
    
    printf("the value entered of a is = %d\n", *ptr);
    printf("the memory location of ptr is = %d\n", &ptr); // MEMORY LOCATION OF PTR
    printf("the value entered of a is = %d\n", a);
    printf("the meory location of a is = %d\n", &a); // MEMORY LOCATION OF A
    printf(" meory location of a is = %d", ptr);     // MEMORY LOCATION OF A
}
