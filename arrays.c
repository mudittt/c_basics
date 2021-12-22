#include <stdio.h>

int main(int argc, char const *argv[])
{
     int age[2][4];
    // age[0]=444;
    // printf("%d\n", age[0]);
    // age[0]=4445;
    // printf("%d\n", age[0]);
    // return 0;




    //  for (int i = 0; i < 2; i++)
    //  {
    //      printf("enter the %d entry of the row of the array = ", i);
    //      scanf("%d", &age[i]);
    //  }
    //  for (int j = 0; j < 4; j++)
    //  {
    //     printf("enter the %d entry of the coloumn of the array = ", j);
    //      scanf("%d", &age[j]);
    //  }
     for (int i = 0; i < 2; i++)
     {  
         for (int j = 0; j < 4; j++)
        {
            printf("enter the [%d][%d] entry of the array = ",i,j);
            scanf("%d", &age[i][j]);
        }   
     }
     
     for (int i = 0; i < 2; i++)
     {  
         for (int j = 0; j < 4; j++)
         { 
            printf("%d ",age[i][j]);
         } 
         printf("\n");
     }





    // int marks[4]= {12,13,14,15};
    // printf("%d\n", marks[0]);
    // printf("%d\n", marks[1]);
    // printf("%d\n", marks[2]);
    // printf("%d\n", marks[3]);

}
