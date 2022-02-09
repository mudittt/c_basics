#include <stdio.h>

void upperMat(int arr1[][5], int r1, int c1)
{
    for (int i = 1; i < r1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            arr1[i][j] = 0;
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
}
void lowerMat(int arr1[][5], int r1, int c1)
{
    int m = 1;
    for (int i = 0; i < r1 - 1; i++)
    {
        m = i + 1;
        for (int k = 1; k < r1 - i; k++)
        {
            arr1[i][m] = 0;
            m++;
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
}
int main()
{
    int arr1[5][5];
    int r1, c1, b;
    printf("Enter number rows of the matrix : ");
    scanf("%d", &r1);
    printf("Enter number columns of the matrix : ");
    scanf("%d", &c1);

    if (r1 == c1)
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
        printf("Enter '1' for printing upper triangular matrix OR '2' for lower triangular matrix -> ");
        scanf("%d", &b);
        switch (b)
        {
        case 1:
            printf("\nWait the function is working..\n");
            upperMat(arr1, r1, c1);
            break;
        case 2:
            printf("\nWait the function is working..\n");
            lowerMat(arr1, r1, c1);
            break;
        default:
            break;
        }
    }
    else
    {
        printf("\nPlease enter a square Matrix\n");
    }

    return 0;
}