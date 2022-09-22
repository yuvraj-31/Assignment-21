/******************************************************************************
10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student.
*******************************************************************************/

#include <stdio.h>
#include<string.h>

struct Students input();

struct Students{
    int roll_no;
    char name[20];
    float chem_marks;
    float phy_marks;
    float maths_marks;
    
};
int main()
{   int n;
    printf("Enter no of students\n");
    scanf("%d",&n);
    struct Students a[n];
    for(int i=0;i<n;i++)
    {
       a[i]=input();
    }
    for(int i=0;i<n;i++)
    {
       float percentage=((a[i].phy_marks+a[i].maths_marks+a[i].chem_marks)/300)*100;
       printf("%f\n",percentage);
    }
    
    
    return 0;
}

struct Students input()
{   
     struct Students b;
     fflush(stdin);
      printf("Enter student name:\n"); 
      fgets(b.name,20,stdin);
        printf("Enter roll no:\n");
        scanf("%d",&b.roll_no);
        printf("Enter maths marks\n");
        scanf("%f",&b.maths_marks);
        printf("Enter phyiscs marks:\n");
        scanf("%f",&b.phy_marks);
        printf("Enter chemistry marks\n");
        scanf("%f",&b.chem_marks);

        return b;
}
