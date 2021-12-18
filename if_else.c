#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("enter your age = ");
    scanf("%d", &age);

    if (age >= 25)
    {
        printf("you can have a drink or two ..or maybe 3");
    }

    else if (16 < age)
    {
        printf("you can come through the back door");
    }
    else
    {

        printf("go home kid");
    }

    return 0;
}
