#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int size, biggest = 0, smallest = 500;
    int *randomNums;
    // time_t t;
    float average;
    double total = 0;

    srand(time(NULL));
    printf("Enter the number of random integers you want in your array? : ");
    scanf("%d", &size);

    randomNums = (int *)malloc(size*(sizeof(int)));
    if (randomNums== 0)
    {
        printf("Random array allocation failed! \n");
        exit(1);
    }
    for (int i = 0; i < size; i++)
    {
        randomNums[i] == (rand()%500) + 1;
    }
    for (int j = 0; j < size; j++)
    {
        total += randomNums[j];
        if (randomNums[j] > biggest)
        {
            biggest = randomNums [j];
        }
        if (randomNums[j]< smallest)
        {
            smallest = randomNums[j];
        }
    }
    average = ((float)total/(float)size);
    printf("The biggest number is %d .\n", biggest);
    printf("The smallest number is %d . \n", smallest);
    printf("the average of the random numbers is %.2f . ", average);

    free(randomNums);
    

    
    
    return 0;
}
