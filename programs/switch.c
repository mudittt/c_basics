#include <stdio.h>

int main(int argc, char const *argv[])
{
    //int age, marks;
    int marks;
    char age;
    printf("enter you age = ");
    scanf("%c", &age);

    printf("enter you marks = ");
    scanf("%d", &marks);

    switch (age)
    {
    case 'm':
        printf("the age is 18\n");
        switch (marks)
        {
            case 100:
                printf("good student but get a life\n");
                break;
        
        }
    break;
    case 45:
        printf("abe buddhe!\n");
        break;

    default:
        printf("age is not 18\n");
        break;
    }
    return 0;
}
