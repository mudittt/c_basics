#include <stdio.h>
void subMat(int arr1[][5], int arr2[][5], int r1, int c1)
{
    int arr3[5][5];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            arr3[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr1[5][5], arr2[5][5];
    int r1, r2, c1, c2;
    printf("Enter number rows of first matrix : ");
    scanf("%d", &r1);
    printf("Enter number columns of first matrix : ");
    scanf("%d", &c1);
    printf("Enter number rows of second matrix : ");
    scanf("%d", &r2);
    printf("Enter number columns of second matrix : ");
    scanf("%d", &c2);

    if (r1 == r2 && c1 == c2)
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("Enter arr1[%d][%d] -> ", i, j);
                scanf("%d", &arr1[i][j]);
            }
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("%d ", arr1[i][j]);
            }
            printf("\n");
        }
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("Enter arr2[%d][%d] -> ", i, j);
                scanf("%d", &arr2[i][j]);
            }
        }
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", arr2[i][j]);
            }
            printf("\n");
        }
        printf("\nWait the function is working..\n");
        subMat(arr1, arr2, r1, c1);
    }
    else
    {
        printf("\nThe order must be same in order to subtract one matrix from another. \n");
    }

    return 0;
}
