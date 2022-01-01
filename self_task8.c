#include <stdio.h>
#include <math.h>
float min_dist(int p, int q, int r, int s)
{
    int temp1, temp2;
    double temp3;
    temp1 = pow((r - p), 2);
    temp2 = pow((s - q), 2);
    temp3 = sqrt(temp1 + temp2);

    return temp3;
}
float areaCircle(float (*hehe)(int, int, int, int), int a, int b, int c, int d)
{
    printf("The area of the circle is : %f", 3.14 * hehe(a, b, c, d) * hehe(a, b, c, d));
}

int main()
{
    int x1, y1, x2, y2;
    printf("Enter the x-coordinate of first point : ");
    scanf("%d", &x1);
    printf("Enter the y-coordinate of first point : ");
    scanf("%d", &y1);
    printf("Enter the x-coordinate of second point : ");
    scanf("%d", &x2);
    printf("Enter the y-coordinate of second point : ");
    scanf("%d", &y2);

    float (*mud)(int, int, int, int);
    mud = &min_dist;
    areaCircle(mud, x1, y1, x2, y2);

    return 0;
}
