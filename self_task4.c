#include <stdio.h>
#include <string.h>

typedef struct drivers
{
    int kilometers;
    char name[20];
    int license_num[30];
    char route[50];
} D;

int main()
{
    // int num;
    // printf("Enter number of drivers you have in your agency : ");
    // scanf("%d", &num);
    D d1, d2, d3;
    printf("Enter the name of first driver : ");
    scanf("%s", &d1.name);
    printf("Enter the license number of the %s : ", d1.name);
    scanf("%s", &d1.license_num);
    printf("Enter the route of the %s : ", d1.name);
    scanf("%s", &d1.route);
    printf("Enter the number of kilometers covered by the %s : ", d1.name);
    scanf("%d", &d1.kilometers);
    printf("Enter the name of second driver : ");
    scanf("%s", &d2.name);
    printf("Enter the license number of the  %s : ", d2.name);
    scanf("%s", &d2.license_num);
    printf("Enter the route of the  %s : ", d2.name);
    scanf("%s", &d2.route);
    printf("Enter the number of kilometers covered by the  %s : ", d2.name);
    scanf("%d", &d2.kilometers);
    printf("Enter the name of third driver : ");
    scanf("%s", &d3.name);
    printf("Enter the license number of the %s : ", d3.name);
    scanf("%s", &d3.license_num);
    printf("Enter the route of the %s : ", d3.name);
    scanf("%s", &d3.route);
    printf("Enter the number of kilometers covered by the %s : ", d3.name);
    scanf("%d", &d3.kilometers);

    printf("\n\n\n\n\n\nname of first driver : %s \n", d1.name );
    printf("license number of %s : %s \n", d1.name , d1.license_num );
    printf("ame of the route of %s : %s \n", d1.name , d1.route );
    printf("number of kilometers covered by %s  : %d \n", d1.name , d1.kilometers );


    printf("\n\nname of second driver : %s \n", d2.name );
    printf("license number of  %s : %s \n", d2.name , d2.license_num );
    printf("name of the route of  %s : %s \n", d2.name , d2.route );
    printf("number of kilometers covered by  %s : %d \n", d2.name , d2.kilometers );


    printf("\n\nname of third driver : %s \n", d3.name );
    printf("license number of %s : %s \n", d3.name , d3.license_num );
    printf("name of the route of %s : %s \n", d3.name , d3.route );
    printf("number of kilometers covered by %s : %d \n", d3.name , d3.kilometers );




}