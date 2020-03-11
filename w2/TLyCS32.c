#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
    {      int i,x;
           long n,S=0;
           printf("Sum Digit Program kaka\n");
           do
           {printf("Enter an integer n= ");
           scanf("%d",&n);
           while(n!=0) 
           {if (n<0) n=-n;
               S=S+n%10;
               n=n/10;
           }
           printf("\n Sum digit = %d\n", S);
           x=getch();
           S=0;
           } while(x!= 27);
           
           return 0;
    }