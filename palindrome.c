#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pal(char ptr1[], char ptr2[])
{
    int i = 1;
    static int a = 0;
    printf("%d", strlen(ptr1));
    while (i < strlen(ptr1) + 1)
        if (ptr1[i - 1] == ptr2[i - 1])
        {
            a++;
            i++;
        }
        else
        {
            i++;
        }
    if (a == strlen(ptr1))
    {
        printf("\n string is a palindrome\n");
    }
    else
    {
        printf("\nstring is not a palindrome \n");
    }
}

int main(int argc, char const *argv[])
{

    char arr[10];
    char rev_arr[10];

    printf("enter anything to see if it's a palindrome or not : ");
    scanf("%s", &arr);
    printf("the entered string is : %s \n", arr);

    strcpy(rev_arr, arr);
    strrev(rev_arr);
    printf("the reverse of entered string is : %s\n", rev_arr);

    pal(arr, rev_arr);

    return 0;
}
