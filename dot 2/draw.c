#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main(int argc, char const *argv[])

{
    int i, k, n;
    char *a;
    a = "*";
    printf("nhap n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= i; k++)
        {
            printf("%s", a);
        }
        printf("\n");
    }
    getch();
    return 0;
}
