/******************************************************************************

           Write a function to sort employees according to their names [refer structure from
question 1]

*******************************************************************************/

#include <stdio.h>
#include<string.h>
struct Employee input();
struct Employee{
    int id;
    char name[20];
    float salary;
    
};
int main()
{
    struct Employee a[10];
    for(int i=0;i<10;i++)
    {
        a[i]=input();
    }
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(strcmp(a[i].name,a[j].name)>0)
            {
                struct Employee temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("%d %s %f\n",a[i].id,a[i].name,a[i].salary);
    }

    return 0;
}
struct Employee input()
{   
     struct Employee b;
        fflush(stdin);
        printf("Enter Employee name\n");
        fgets(b.name,20,stdin);
        printf("Enter  Employee id\n");
        scanf("%d",&b.id);
        printf("Enter Employee salary\n");
        scanf("%f",&b.salary);
        
    
        return b;
}
