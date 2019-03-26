#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#define PI 3.14
int main(int argc, char const *argv[])
{   int a; float p,s,v;
    printf("Nhap vao ban kinh R: "); scanf("%d",&a);
    p= 2*PI*a; s=a*a*PI; v=a*a*a*4/3*PI;
    printf("Chu vi la: %2f\n",p);
    printf("Dien tich la: %2f\n",s);
    printf("The tich la: %2f\n",v);
    getchar();
    return 0;
}
