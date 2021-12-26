#include <stdio.h>
void arrrev(int arr[], int size)
{
    if (size % 2 == 0)
    {
        for (int i = 0; i <= size / 2; i++)
        {
            int temp;
            temp = arr[i];
            arr[i] = arr[size - i];
            arr[size - i] = temp;
        }
    }
    else
    {
        for (int i = 0; i < size / 2; i++)
        {
            int temp;
            temp = arr[i];
            arr[i] = arr[size - i];
            arr[size - i] = temp;
        }
    }
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &num);
    int array[num - 1];
    for (int i = 1; i < num + 1; i++)
    {
        printf("enter %d value of the array ", i);
        scanf("%d", &array[i - 1]);
    }
    for (int j = 1; j < num + 1; j++)
    {
        printf("the value at %d of the array is %d\n", j, array[j - 1]);
    }
    arrrev(array, num - 1);
    for (int j = 1; j < num + 1; j++)
    {
        printf("the reversed value at %d of the array is %d\n", j, array[j - 1]);
    }

    return 0;
}
