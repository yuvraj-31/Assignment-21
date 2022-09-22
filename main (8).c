/******************************************************************************

           Write a program to store information of 10 students and display them using structure.
*******************************************************************************/

#include <stdio.h>
#include<string.h>

struct Students input();

struct Students{
    int roll_no;
    char name[20];
    int class;
    
};
int main()
{
    struct Students a[10];
    for(int i=0;i<10;i++)
    {
       a[i]=input();
    }
    for(int i=0;i<10;i++)
    {
       printf("%d %s %d",a[i].roll_no,a[i].name,a[i].class);
    }
    
    return 0;
}
// void display(struct Students b)
// {
    
// }
struct Students input()
{   
     struct Students b;
     fflush(stdin);
       printf("Enter student name:\n"); 
       fgets(b.name,20,stdin);
        printf("Enter roll no:\n");
        scanf("%d",&b.roll_no);
        printf("Enter class \n");
        scanf("%d",&b.class);

        return b;
}
