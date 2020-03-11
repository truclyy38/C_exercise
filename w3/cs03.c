#include <stdio.h>

void outPut( int a[], int n)
    {   int i;
        for(i=0; i<n;i++) printf("%d\t",a[i]);
    }
void inPut( int a[], int *n)
    {   
        int ok, num;
        do 
        {
            printf("Input a number: "); scanf("%d",&num);
            ok=(num!=0);
            if(ok)
                {
                    a[*n]=num;
                    (*n)++;
                }
        } while (ok);
        printf("The array is \n"); 
        outPut(a,*n);
    } 
int sum(int a[],int n) 
    {
        int S=0,i;
        for(i=0; i<n;i++) S+=a[i];
        return S;
    }
int main(int argc, char argv[])
  {      int a[100],n=0;
        inPut(a,&n);
        printf("Sum = %d",sum(a,n));
        getch();
        return 0;
  }

