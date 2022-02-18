#include <stdio.h>
int main ()
{
    char alphabet;
    printf("Enter an alphabet : ");
    scanf("%c", &alphabet);
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u'
    || alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U') {
        printf("Entered alphabet is a VOWEL.\n");
    }
    else {
        printf("Entered alphabet is not a VOWEL.\n");
    }

    return 0;
}
