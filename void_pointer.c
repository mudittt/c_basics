#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 3022;
    float b = 5.45;
    void *ptr;
    ptr = &b;
    printf("%0.3f\n", *(float *)ptr);
    ptr = &a;
    printf("%d\n", *(int *)ptr);

    return 0;}