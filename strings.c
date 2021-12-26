#include <stdio.h>
#include <string.h>

void Print_String(char xyz[])
{

    for (int i = 0; i < 15; i++)
    {
        if (xyz[i] == '\0')
            break;

        printf("%c", xyz[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    // char str1[6] = "mudit";
    // char str2[5] = "mudit";
    // char str3[] = {'m','u', 'd', 'i', 't', '\0'};
    // printf("%s\n", str1);
    // printf("%s\n", str2);
    // printf("%s\n", str3);

    char tat[15];
    char tat2[15];
    printf(" enter a string in tat : ");
    gets(tat);
    printf(" using self made function : ");
    Print_String(tat);
    printf(" using printf :  %s\n", tat);
    printf(" using puts function : ");
    puts(tat);
    printf(" number of characters in the above entered string is %d\n", strlen(tat));
    strcpy(tat2, tat);
    printf(" tat2 is : %s\n", tat2);
    printf(" the reverse of the above entered string is %s\n", strrev(tat));
    strcpy(tat2, tat);
    printf(" tat2 is : %s\n", tat2);

    // printf(" the combination of tat and tat2 is : %s\n", strcat(tat, tat2));
    // puts(tat);
    // puts(tat2);
    // this above line will make tat = tat+tat2 and will also make tat2 = tat+tat2
    strrev(tat);
    printf(" the combination of tat and tat2 is : %s\n", strcat(tat, tat2));

    return 0;
}
