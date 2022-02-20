#include <stdio.h>

int main()
{   
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    
    int arr[n][n];
    
    arr[0][0] = 1;
    arr[1][0] = 1;
    arr[1][1] = 1;
    
    for (int i=3; i< n + 1; i++) {
        
        for(int j=0; j<i; j++){
            if((j==0) || (j==i-1)){
                arr[i-1][j] = arr[i-2][0];
            }
            else{
                arr[i-1][j] = arr[i-2][j] + arr[i-2][j-1];
            }
        }   
    }
    for(int i = 1 ; i< n + 1 ; i++){
        for(int j = 0 ; j < i; j++){
            printf("%d ", arr[i-1][j]);
        }
        printf("\n");
    } 
    return 0;
}
