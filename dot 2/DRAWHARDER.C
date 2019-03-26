#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(int argc, char const *argv[])

{
    int i, k, d, t, n;
    char *a;
    a = "*";
    printf("nhap n:");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (k = i; k >= 1; k--)
        {
            printf("%s", a);
        }
        printf("\n");
    }
    for (i = 1; i <= n; i++)
    {
        d = n - i;
        for (t = 1; t <= d; t++)
            printf(" ");
        for (k = 1; k <= i; k++)
        {
            printf("%s", a);
        }
        printf("\n");
    }
    for (i = 1; i <= n; i++)
    {
        d = n - i;
        for (t = 1; t <= d; t++)
            printf(" ");
        for (k = 1; k <= i; k++)
        {
            printf("%2s", a);
        }
        printf("\n");
    }
    printf("\n");
    for (i = n; i >=1; i--)
    {
        d = n-i;
        for (t = d; t >=1; t--)
            printf(" ");
        for (k = i; k >=1; k--)
        {
            printf("%-2s", a);
        }
        printf("\n");
    }
    getch();
    return 0;
}
