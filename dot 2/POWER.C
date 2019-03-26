#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(int argc, char const *argv[])

{
    int n, a, i, l=1;

    printf("ENTER NUMBER:");
    scanf("%d", &n);
    printf("ENTER A POWER: ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        l=l*n;
          }
    printf(">> Ouput %d^%d=%d", n,a,l);
    getch();
    return 0;
}
