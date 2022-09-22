/******************************************************************************

                      Define a structure Employee with member variables id, name, salary

*******************************************************************************/

#include <stdio.h>

    struct Employee
    {
      int id;
      char name[20];
      float salary;
    };
int main()
{   

    struct Employee a={1,"yuvraj",500000.0f};
    printf("%d %s %f",a.id,a.name,a.salary);

    return 0;
}
