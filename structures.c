#include <stdio.h>
#include <string.h>

typedef struct candidate
{
    int id;
    char first_letter_of_name_x;
    long long int mobilenumber;
    char name[50];
} std;

int main()
{
    // struct candidate c1, c2, c3;
    std c1, c2, c3;
    c1.id = 01;
    c2.id = 02;
    c3.id = 03;
    strcpy(c1.name ,"mudit1");                  // c1.name = "mudit1";  will show error
    strcpy(c2.name , "mudit2");
    strcpy(c3.name , "mudit3");
    c1.mobilenumber = 11032041;
    c2.mobilenumber = 21032492;
    c3.mobilenumber = 36342043;
    c1.first_letter_of_name_x = 'm';
    c2.first_letter_of_name_x = 'a';
    c3.first_letter_of_name_x = 'd';

    printf(" candidate %s ka mobile number is %lu and first letter of the name is %c \n", c1.name, c1.mobilenumber, c1.first_letter_of_name_x);
    printf(" candidate %s ka mobile number is %lu and first letter of the name is %c \n", c2.name, c2.mobilenumber, c2.first_letter_of_name_x);
    printf(" candidate %s ka mobile number is %lu and first letter of the name is %c \n", c3.name, c3.mobilenumber, c3.first_letter_of_name_x);

    return 0;
}
