#include <stdio.h>
#include <stdlib.h>
#include <string.h>
static int a, b;

int multiply(int mat1[][a], int mat2[][b], int r1, int c2)

{
    int a = 0;
    static int MAT[5][5];
    while (a < r1)
    {
        for (int i = 0; i < c2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                MAT[a][i] += mat1[a][j] * mat2[j][a];
            }
        }
        a++;
    }
    /* For printing the final product of two matrix*/
    printf("*******************************\n");
    printf("Product of the above two matrices is :\n");
    for (int q = 1; q < r1 + 1; q++)
    {
        for (int p = 1; p < c2 + 1; p++)
        {
            printf("%d  ", MAT[q - 1][p - 1]);
        }
        printf("\n");
    }
}
int multiply3(int mat1[][a], int mat2[][b], int r1, int c2, int c1)

{
    int a = 0;
    static int MAT[5][5];
    while (a < r1)
    {
        for (int i = 0; i < c2; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                MAT[a][i] += mat1[a][j] * mat2[j][a];
            }
        }
        a++;
    }
    /* For printing the final product of two matrix*/
    printf("*******************************\n");
    printf("Product of the above two matrices is :\n");
    for (int q = 1; q < r1 + 1; q++)
    {
        for (int p = 1; p < c2 + 1; p++)
        {
            printf("%d  ", MAT[q - 1][p - 1]);
        }
        printf("\n");
    }
}
int multiply2(int mat1[][a], int mat2[][b], int r1, int c2)

{
    int a = 0;
    static int MAT2[5][5];
    while (a < r1)
    {
        for (int i = 0; i < c2; i++)
        {
            for (int j = 0; j < c2 - 1; j++)
            {
                MAT2[a][i] += mat1[a][j] * mat2[j][a];
            }
        }
        a++;
    }
    /* For printing the final product of two matrix*/
    printf("*******************************\n");
    printf("Product of the above two matrices is :\n");
    for (int q = 1; q < r1 + 1; q++)
    {
        for (int p = 1; p < c2 + 1; p++)
        {
            printf("%d  ", MAT2[q - 1][p - 1]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int r1, r2, c1, c2;

    printf("enter the number of rows in 1st matrix : ");
    scanf("%d", &r1);
    printf("enter the number of coloumns in 1st matrix : ");
    scanf("%d", &c1);
    printf("enter the number of rows in 2nd matrix : ");
    scanf("%d", &r2);
    printf("enter the number of coloumns in 2nd matrix : ");
    scanf("%d", &c2);
    int matrix1[r1][c1], matrix2[r2][c2];
    a = c1;
    b = c2;

    if (c1 == r2)
    {
        if (r1 == c1 && r2 == c2)
        {

            for (int i = 1; i < r1 + 1; i++)
            {
                for (int j = 1; j < c1 + 1; j++)
                {
                    printf("Enter the [%d][%d] value of the first matrix : ", i, j);
                    scanf("%d", &matrix1[i - 1][j - 1]);
                }
            }
            printf("*******************************\n");
            for (int k = 1; k < r2 + 1; k++)
            {
                for (int l = 1; l < c2 + 1; l++)
                {
                    printf("Enter the [%d][%d] value of the second matrix : ", k, l);
                    scanf("%d", &matrix2[k - 1][l - 1]);
                }
            }
            /* For printing the value of matrix1*/
            printf("the first matrix is :  \n\n");
            for (int f = 1; f < r1 + 1; f++)
            {
                for (int g = 1; g < c1 + 1; g++)
                {
                    printf("%d  ", matrix1[f - 1][g - 1]);
                }
                printf("\n");
            }
            printf("\n");
            /* For printing the value of matrix2*/
            printf("the second matrix is :  \n\n");
            for (int j = 1; j < r2 + 1; j++)
            {
                for (int k = 1; k < c2 + 1; k++)
                {
                    printf("%d  ", matrix2[j - 1][k - 1]);
                }
                printf("\n");
            }
            printf("\n");
            multiply(matrix1, matrix2, r1, c2);
        }
        else if (r1 > c1 && r2 < c2)
        {
            for (int i = 1; i < r1 + 1; i++)
            {
                for (int j = 1; j < c1 + 1; j++)
                {
                    printf("Enter the [%d][%d] value of the first matrix : ", i, j);
                    scanf("%d", &matrix1[i - 1][j - 1]);
                }
            }
            printf("*******************************\n");
            for (int k = 1; k < r2 + 1; k++)
            {
                for (int l = 1; l < c2 + 1; l++)
                {
                    printf("Enter the [%d][%d] value of the second matrix : ", k, l);
                    scanf("%d", &matrix2[k - 1][l - 1]);
                }
            }
            /* For printing the value of matrix1*/
            printf("the first matrix is :  \n\n");
            for (int f = 1; f < r1 + 1; f++)
            {
                for (int g = 1; g < c1 + 1; g++)
                {
                    printf("%d  ", matrix1[f - 1][g - 1]);
                }
                printf("\n");
            }
            printf("\n");
            /* For printing the value of matrix2*/
            printf("the second matrix is :  \n\n");
            for (int j = 1; j < r2 + 1; j++)
            {
                for (int k = 1; k < c2 + 1; k++)
                {
                    printf("%d  ", matrix2[j - 1][k - 1]);
                }
                printf("\n");
            }
            printf("\n");
            multiply2(matrix1, matrix2, r1, c2);
        }
        else
        {
            for (int i = 1; i < r1 + 1; i++)
            {
                for (int j = 1; j < c1 + 1; j++)
                {
                    printf("Enter the [%d][%d] value of the first matrix : ", i, j);
                    scanf("%d", &matrix1[i - 1][j - 1]);
                }
            }
            printf("*******************************\n");
            for (int k = 1; k < r2 + 1; k++)
            {
                for (int l = 1; l < c2 + 1; l++)
                {
                    printf("Enter the [%d][%d] value of the second matrix : ", k, l);
                    scanf("%d", &matrix2[k - 1][l - 1]);
                }
            }
            /* For printing the value of matrix1*/
            printf("the first matrix is :  \n\n");
            for (int f = 1; f < r1 + 1; f++)
            {
                for (int g = 1; g < c1 + 1; g++)
                {
                    printf("%d  ", matrix1[f - 1][g - 1]);
                }
                printf("\n");
            }
            printf("\n");
            /* For printing the value of matrix2*/
            printf("the second matrix is :  \n\n");
            for (int j = 1; j < r2 + 1; j++)
            {
                for (int k = 1; k < c2 + 1; k++)
                {
                    printf("%d  ", matrix2[j - 1][k - 1]);
                }
                printf("\n");
            }
            printf("\n");
            multiply3(matrix1, matrix2, r1, c2, c1);
        }
    }

    else
    {
        printf("Matrices cannot be multiplied. Not possible. ");
    }

    return 0;
}
