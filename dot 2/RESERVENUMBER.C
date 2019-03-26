#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(int argc, char const *argv[])

{
    int n, d,m=0;

    printf("ENTER NUMBER:");
    scanf("%d", &n);
    while (n > 0)
    {
        d = n % 10;
        m=m*10+d;
        n /= 10;
    }

    printf("Number after result: %d", m);
    getch();
    return 0;
}
