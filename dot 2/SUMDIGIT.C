#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(int argc, char const *argv[])

{
    int n, i, d, sum = 0;

    printf("ENTER NUMBER:");
    scanf("%d", &n);
    while (n > 0)
    {
        d = n % 10;
        sum += d;
        n /= 10;
    }

    printf("result %d", sum);
    getch();
    return 0;
}
