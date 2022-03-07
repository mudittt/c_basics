#include <stdio.h>
static int temp;
int subSet(int arr_A[], int n1, int n2, int arr_B[])
{
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            if (arr_A[i] == arr_A[j])
            {
                temp++;
            }
        }
    }
    if (temp == n2)
    {
        printf("subSet confirmed");
    }
    else
    {
        printf("Not a subSet");
    }
}
int main()
{
    int n1, n2, arr_A[15], arr_B[15];
    printf("Enter the number of element in arr_A : ");
    scanf("%d", &n1);
    for (int i = 0; i < n1; i++)
    {
        printf("Enter arr_A[%d] -> ", i);
        scanf("%d", &arr_A[i]);
    }
    for (int i = 0; i < n1; i++)
    {
        printf(" %d \n", arr_A[i]);
    }
    printf("Enter the number of element in arr_B : ");
    scanf("%d", &n2);
    if (n2 <= n1)
    {
        for (int i = 0; i < n2; i++)
        {
            printf("Enter arr_B[%d] -> ", i);
            scanf("%d", &arr_B[i]);
        }
        for (int i = 0; i < n2; i++)
        {
            printf(" %d \n", arr_B[i]);
        }
    }
    else
    {
        printf("arr_B is not a subset of arr_A ");
    }
    printf("Checking whether array is a subset or not \n\n");
    subSet(arr_A, n1, n2, arr_B);
    return 0;
}
