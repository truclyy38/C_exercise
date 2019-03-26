#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(int argc, char const *argv[])

{
    int n,i, d=0,m=0;

    printf("ENTER NUMBER:");
    scanf("%d", &n);
     printf("Sum of series: ");
    for(i=1;i<=n;i++)
    { d = 10*d+3;
    printf("%d + ",d);
        m+=d;
    }
    printf("0 = %d", m); 
    getch();
    return 0;
}
