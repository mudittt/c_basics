#include <stdio.h>
void transMat(int arr1[][5], int r1, int c1)
{
    int arr2[5][5];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            arr2[j][i] = arr1[i][j];
        }
    }
    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr1[5][5];
    int r1, c1;
    printf("Enter number rows of the matrix : ");
    scanf("%d", &r1);
    printf("Enter number columns of the matrix : ");
    scanf("%d", &c1);

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

    printf("\nWait the function is working..\n");
    transMat(arr1, r1, c1);

    return 0;
}
