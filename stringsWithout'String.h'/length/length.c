#include <stdio.h>
int main()
{
    char str[25] = "hahaahahag sayde";
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    printf("The length of the string is -> %d\n", i);
    printf("If we include NULL character, then length is -> %d\n", i + 1);
    return 0;
}
