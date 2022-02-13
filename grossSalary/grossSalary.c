#include <stdio.h>

int main ()
{
    float basix, DA, HRA, gross;
    printf("Enter basic salary : ");
    scanf("%f", &basix);
    if (basix <= 10000) {
        HRA = basix * 0.2;
        DA = basix * 0.8;
    }
    else if (basix <= 20000) {
        HRA = basix * 0.25;
        DA = basix * 0.9;
    }
    else {
        HRA = basix * 0.3;
        DA = basix * 0.95;
    }
    gross = basix + DA + HRA;
    printf("The gross salary is : %.2f \n", gross);
    return 0;
}
