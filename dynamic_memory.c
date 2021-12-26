#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n, m;
    // use of malloc :
    printf("Enter the number of elements you want in this array : ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 1; i < n + 1; i++)
    {
        printf("enter the value at number %d position of this array : ", i);
        scanf("%d", &ptr[i - 1]);
    }
    printf("\n\n\n\n");
    for (int i = 1; i < n + 1; i++)
    {
        printf("the value at number at %d position of this array is : %d\n", i, ptr[i - 1]);
    }

    // use of calloc :
    // printf("Enter the number of elements you want in this array : ");
    // scanf("%d", &n);
    //
    // ptr = (int *)calloc(n, sizeof(int));
    // for (int i = 1; i < n+1 ; i++)                                                  // if we use calloc and comment out this part of code,
    // {                                                                               // calloc function will automatically assign '0' in ptr[i]
    // printf("enter the value at number %d position of this array : ", i);            //
    // scanf("%d", &ptr[i-1]);                                                         //
    // }                                                                               //
    // printf("\n\n\n\n");
    // for (int i = 1; i < n+1 ; i++)
    // {
    // printf("the value at number at %d position of this array is : %d\n", i, ptr[i-1]);
    //
    // }

    //use of realloc :
    printf("Enter the number of elements you want in the mew array : ");
    scanf("%d", &m);
    ptr = (int *)realloc(ptr, n * sizeof(int));

    // for (int i = 1; i < m + 1; i++)
    // {
    //     printf("enter the value at number %d position of this array : ", i);
    //     scanf("%d", &ptr[i - 1]);
    // }
    printf("\n\n\n\n");
    for (int i = 1; i < m + 1; i++)
    {
        printf("the value at number at %d position of this array is : %d\n", i, ptr[i - 1]);
    }
    free(ptr);

    return 0;
}