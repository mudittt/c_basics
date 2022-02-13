/* x^3 + y^4 + 5*x*y + 67 */
/* y^6 + 8*(x^2)*(y^5) + 12 */
#include <stdio.h>
#include <math.h>
int main()
{
    int x, y;
    printf("Enter x -> ");
    scanf("%d", &x);
    printf("Enter y -> ");
    scanf("%d", &y);
    printf("The answer to the first expression is -> %.1lf\n", pow(x, 3) + pow(y, 4) + (5 * x * y) + 67);
    printf("The answer to the second expression is -> %.1lf\n", pow(y, 6) + (8 * (pow(x, 2) * pow(y, 5))) + 12);
    return 0;
}
