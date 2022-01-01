#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *operation;
    int a, b;
    a = atoi(argv[2]);                       /* atoi converts a string into an integer */
    b = atoi(argv[3]);
    operation = argv[1];

    printf("operation is : %s\n", operation);
    printf("first number is : %d\n", a);
    printf("second number is : %d\n", b);

    if (strcmp(operation, "add") == 0)
    {
        printf("%d", a + b);
    }
    else if (strcmp(operation, "multiply") == 0)
    {
        printf("%d", a * b);
    }
    else if (strcmp(operation, "subtract") == 0)
    {
        printf("%d", a - b);
    }
    else if (strcmp(operation, "divide") == 0)
    {
        printf("%d", a / b);
    }

    return 0;
}
