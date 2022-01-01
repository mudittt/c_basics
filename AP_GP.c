#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{   int a1, d, a2, r;
    int n1,n2;
    /* FOR AP */
    printf("Enter a first term of your AP :");
    scanf("%d", &a1);
    printf("Enter the common difference of your AP :");
    scanf("%d", &d);

    printf("Enter the number of terms you want of your AP : ");
    scanf("%d", &n1);

    for (int i = 1; i <= n1; i++)
    {
        printf(" %d\n", a1 + ((i-1)*d));
  
    }
    printf("The sum of the above number of elements is : %d", (n1 * ((2*a1)+ ((n1 - 1)*d)))/2);
    
    /* FOR GP */
    printf("Enter a first term of your GP :");
    scanf("%d", &a2);
    printf("Enter the common ratio of your GP :");
    scanf("%d", &r);
    printf("Enter the number of terms you want of your GP : ");
    scanf("%d", &n2);

    for (int i = 1; i <= n2; i++)
    {   
        printf(" %lf\n", (a2 * pow(r, (i-1))));     
    }

     printf("The sum of the above number of elements is : %lf", (a2 * (pow(r, n2) - 1)) / (r - 1 ));


    return 0;
}
