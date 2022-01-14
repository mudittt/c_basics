#include <stdio.h>
void circle()
{
    float radius;
    printf("Enter radius : ");
    scanf("%f", &radius);
    printf("The area of this circle is : %.1f ", 3.14 * radius * radius);
}
void square()
{
    int side;
    printf("Enter length of side : ");
    scanf("%d", &side);
    printf("The area of this sqaure is : %d ", side * side);
}
void triangle()
{
    int base, height;
    printf("Enter length of base : ");
    scanf("%d", &base);
    printf("Enter length of height : ");
    scanf("%d", &height);
    printf("The area of this sqaure is : %d ", ((base * height) / 2));
}
void rectangle()
{
    int len, wid;
    printf("Enter length : ");
    scanf("%d", &len);
    printf("Enter width : ");
    scanf("%d", &wid);
    printf("The area of this sqaure is : %d ", wid * len);
}

int main(int argc, char const *argv[])
{
    int num;
    printf(" Enter '1' to find out the area of CIRCLE \n Enter '2' to find out the area of SQUARE \n Enter '3' to find out the area of TRIANGLE \n Enter '4' to find out the area of RECTANGLE : ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        circle();
        break;
    case 2:
        square();
        break;
    case 3:
        triangle();
        break;
    case 4:
        rectangle();
        break;

    default:
        printf("Enter a valid number\n");
        break;
    }
    return 0;
}
