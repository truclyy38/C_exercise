#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main(int argc, char const *argv[])

{
    int t,i,n;
    printf("nhap n:");
    scanf("%d", &n);
    t=1;
    for (i = 1; i <= n; i++)
    {
       t*=i;
    }
        printf("result %d",t);
    getch();
    return 0;
}
