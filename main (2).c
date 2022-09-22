/******************************************************************************

                     Write a function to take input employee data from the user. [ Refer structure from
question 1 ]

*******************************************************************************/

#include <stdio.h>
#include<string.h>

    struct Employee
    {
      int id;
      char name[20];
      float salary;
    };
int main()
{   

    struct Employee a;
    printf("Enter the Employee name\n");
    fgets(a.name,20,stdin);
    a.name[strlen(a.name)-1]='\0';
    printf("Enter the Employee id\n");
    scanf("%d",&a.id);
    printf("Enter the Employee salary\n");
    scanf("%f",&a.salary);
    printf("%d %s %f",a.id,a.name,a.salary);

    return 0;
}
