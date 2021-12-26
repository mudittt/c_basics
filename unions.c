#include <stdio.h>
#include <string.h>

typedef union employee                 // if we use struct instead of union then the code will run just fine.
{
    int id;
    char name[50];
    int salary;
    char first_letter;
} u;

int main()
{
    u e1, e2, e3;
    e1.id = 1;
    e2.id = 2;
    e3.id = 3;
    e1.salary = 450;
    e2.salary = 455;
    e3.salary = 440;
    strcpy (e1.name, "mudit");
    strcpy (e2.name, "singh");
    strcpy (e3.name, "tyagi");
    e1.first_letter = 'm';
    e2.first_letter = 's';
    e3.first_letter = 't';

    printf(" the employee with %d id is %s and he/she have a salary of : %d and the first letter of their name is %c \n", e1.id , e1.name, e1.salary, e1.first_letter);
    printf(" the employee with %d id is %s and he/she have a salary of : %d and the first letter of their name is %c \n", e2.id , e2.name, e2.salary, e2.first_letter);
    printf(" the employee with %d id is %s and he/she have a salary of : %d and the first letter of their name is %c \n", e3.id , e3.name, e3.salary, e3.first_letter);

    return 0;
}
