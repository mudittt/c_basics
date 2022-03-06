#include <stdio.h>
#include <math.h>

int main()
{
    float a, d;
    float n;
    printf("Enter the first element of the harmonic progression series :  ");
    scanf("%f", &a);
    getchar();
    printf("Enter the common difference of the denominators of the series :  ");
    scanf("%f", &d);
    getchar();

    printf("Enter the number of elements you want of the harmonic progression series :  ");
    scanf("%f", &n);
    getchar();

    for (int i = 1; i < n + 1; i++)
    {
        printf(" (1/%.2f) \n", (a + ((i - 1) * d)));
    }

    /* this is the formula i found on the internet and it's working fine. Although when I manually calculate the sum,
    the answer is coming out to be different. */
    printf("\nThe sum of the above elements is : %f ", (log(((2 * (a)) + (((2 * n) - 1) * d)) / ((2 * (a)) - d))) / (d));

    return 0;
}
