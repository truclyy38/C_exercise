#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main(int argc, char const *argv[])

{ int i,n;
 printf("nhap n:");
    scanf("%d", &n);
    i=1;
    while(i++<=9) printf("%d * %d = %d\n",n,i,i*n );
   
    getch();
    return 0;
}
