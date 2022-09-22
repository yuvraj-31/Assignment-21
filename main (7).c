/******************************************************************************
Write a program to calculate the difference between two time periods.
*******************************************************************************/

#include <stdio.h>
#include<string.h>

struct Period input();

struct Period{
    int hours;
    int minutes;
    int seconds;
    
};
 struct Period diff(struct Period x1, struct Period x2);
int main()
{  
    struct Period a;
    struct Period b;
    struct Period c;
    a=input();
    b=input();
    c=diff(a,b);
    printf("difference in time period is:\n");
    printf("%d hours %d minutes %d seconds",c.hours,c.minutes,c.seconds);
    
    
    
    return 0;
}

 struct Period diff(struct Period x1, struct Period x2)
 {   
     int count1=0,count2=0;
     struct Period b;
     if((x1.hours>x2.hours) || (x1.minutes>x2.minutes) || (x1.seconds>x2.seconds))
       count1++;
     else if((x1.hours<x2.hours) || (x1.minutes<x2.minutes) || (x1.seconds<x2.seconds))
       count2++;
     else
      { b.hours=0;
        b.minutes=0;
        b.seconds=0;
        return b;
      }
      if(count1==1)
      {
         if(x1.minutes<x2.minutes)
            x1.minutes=x1.minutes+60;
         if(x1.seconds<x2.seconds)
            x1.seconds=x1.seconds+60;
         b.hours= x1.hours-x2.hours;
         b.minutes=x1.minutes-x2.minutes;
         b.seconds=x1.seconds-x2.seconds;
         return b;
      }
      if(count2==1)
      {
          if(x1.minutes>x2.minutes)
            x2.minutes=x2.minutes+60;
         if(x1.seconds>x2.seconds)
            x2.seconds=x2.seconds+60;
         b.hours= x2.hours-x1.hours;
         b.minutes=x2.minutes-x1.minutes;
         b.seconds=x2.seconds-x1.seconds;
         return b;
      }
 }

struct Period input()
{   
     struct Period b;
      int x,y,z;
        printf("Enter hours:\n");
        scanf("%d",&x);
        printf("Enter minutes\n");
        scanf("%d",&y);
        printf("Enter seconds\n");
        scanf("%d",&z);
        int n=y/60;
        if(n>0)
        {
          x=x+n;
          y=y%60;
        }
        int m=z/60;
        if(m>0)
        {
            y=y+m;
            z=z%60;
        }
        b.hours=x;
        b.minutes=y;
        b.seconds=z;

        return b;
}
