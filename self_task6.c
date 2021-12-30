#include <stdio.h>

void product_matrices(int mat1[][2], int mat2[][2], int r1, int c2)
{
    int mat[2][2];
    mat[0][0] = mat1[0][0] * mat2[0][0] + mat1[0][1] * mat2[1][0];
    mat[0][1] = mat1[0][0] * mat2[0][1] + mat1[0][1] * mat2[1][1];
    mat[1][0] = mat1[1][0] * mat2[0][0] + mat1[1][1] * mat2[1][0];
    mat[1][1] = mat1[1][0] * mat2[0][1] + mat1[1][1] * mat2[1][1];
    /* For printing the product matrix*/
    printf("After multiplying first and second matrices : \n\n");
    for (int q = 1; q < r1 + 1; q++)
    {
        for (int p = 1; p < c2 + 1; p++)
        {
            printf("%d  ", mat[q - 1][p - 1]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    int r1, r2, c1, c2;
    printf("\n\n********************************* This program can only multiply 2X2 matrices****************************************\n\n");

    printf("enter the number of rows in 1st matrix : ");
    scanf("%d", &r1);
    printf("enter the number of coloumns in 1st matrix : ");
    scanf("%d", &c1);
    printf("enter the number of rows in 2nd matrix : ");
    scanf("%d", &r2);
    printf("enter the number of coloumns in 2nd matrix : ");
    scanf("%d", &c2);
    int matrix1[r1][c1], matrix2[r2][c2];
    int product[r1][c2];
    if (r1 == 2 && r2 == 2 && c1 == 2 && c2 == 2)
    {
        if (c1 == r2)
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
            product_matrices(matrix1, matrix2, r1, c2);
        }
        else
        {
            printf("Matrices cannot be multiplied. Not possible. ");
        }
    }
    else
    {
        printf("this program can only multiply 2X2 matrices. will modify it later!!");
    }

    return 0;
}
