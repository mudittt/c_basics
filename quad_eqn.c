#include <stdio.h>
#include <math.h>
int funcCall(int A, int B, int D)
{
    float temp1, temp2;
    temp1 = sqrt(D);
    temp2 = 2 * A;

    printf("The roots are %f and %f ", (-B - temp1) / temp2, (-B + temp1) / temp2);
}
int funcCall2(int A, int B, int D)
{
    float temp1, temp2;
    temp1 = sqrt(D);
    temp2 = 2 * A;

    printf("The roots are %fi and %fi ", (-B - temp1) / temp2, (-B + temp1) / temp2);
}

int main(int argc, char const *argv[])
{
    int a, b, c, temp1, temp2, D, imaginary;
    printf("\n\n\n A : coefficient of x(sq), B : coefficient of x, C : constant \n\n\n");
    printf("\nEnter the value of A : ");
    scanf("%d", &a);
    printf("\nEnter the value of B : ");
    scanf("%d", &b);
    printf("\nEnter the value of C : ");
    scanf("%d", &c);
    temp1 = pow(b, 2);
    temp2 = 4 * a * c;
    D = temp1 - temp2;
    imaginary = temp2 - temp1;
    if (temp1 - temp2 == 0)
    {
        printf("The roots will be real and equal. \n");
        funcCall(a, b, D);
    }
    else if (temp1 - temp2 > 0)
    {
        printf("The roots will be real and distinct. \n");
        funcCall(a, b, D);
    }
    else if (temp1 - temp2 < 0)
    {
        printf("The roots will be imaginary . \n");
        funcCall2(a, b, imaginary);
    }

    return 0;
}
