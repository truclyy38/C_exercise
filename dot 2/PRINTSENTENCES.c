#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])

{
    int i,n;
    
    printf("nhap n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("This is a sentence %d\n", i);
    }
    getch();
    return 0;
}
