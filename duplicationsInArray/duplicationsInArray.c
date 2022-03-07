#include <stdio.h>

int main()
{
    int n, arr[15], arr2[15], count;
    printf("enter the elements in your array : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter a number at index: %d -> ", i);
        scanf("%d", &arr[i]);
    }
    printf("Your Entered Array is : \n");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr2[j]);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        count = -1;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr2[j])
            {
                count++;
            }
        }

        printf("The %d element is repeated ", arr[i]);
        printf("%d times\n", count);
    }
    return 0;
}
