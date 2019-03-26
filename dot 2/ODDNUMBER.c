#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])

{
    int i, n;
    printf("Nhap vao n ");
    scanf("%d", &n);
    printf(">>");
    for (i = 1; i <= n; i++)
       { if (i % 2 == 1)
            printf("%3d", i);}
    getch();
    return 0;
}
