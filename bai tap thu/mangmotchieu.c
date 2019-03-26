#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(int argc, char const *argv[])

{
    int n,a[n],i;

    printf("Nhap vao so phan tu:");
    scanf("%d", &n);

    for(i=0;i<n;i++)
    { printf("Nhap vao phan tu thu %d: ",i+1); scanf("%d",&a[i]);}
     for(i=0;i<n;i++)
     { printf("phan tu thu %d la a[%d]= %d \n",i+1,i+1,a[i]); }
     for(i=n-1;i>=0;i--)
     { printf("phan tu thu %d la a[%d]= %d \n",i+1,i+1,a[i]); }

    getch();
    return 0;
}
