//  #include<stdioh>

//  int main(int argc, char const *argv[])
//  {
//      int j,i, num;                                 // int i=0, num;
//      printf("enter num= ");
//      scanf("%d", &num);
//      for ( i=0, j=0 ; j< 5, i <= num; i++, j++)                //  for (; i <= num; i++)  
//      {                                                        //first block is optional
//          printf("%d%d\n",i,j);                     // 2nd block mein jo last expression hai wo consider hoga
//          i=i;                                            // third block is optional too
//      }
    
//      return 0;
//  }

 #include<stdio.h>

 void main(){
     int a, i, result;
     printf("number = ");
     scanf("%d", &a);
     i=0;
     for ( i = 0; i < a; i++)
     {
         printf(" %d ", a-i);

     }
    


    
 }