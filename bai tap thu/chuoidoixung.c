#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char a[100];
    int i, b = 0, k, dodai;
    gets(a);
    dodai = strlen(a);
    k = dodai / 2;
    for (i = 0; i <= k; i++)
    {
        if (a[i] != a[dodai - i - 1])
            b = 1;
    }
    if (b == 1)
    {
        puts("a la chuoi khong doi xung");
    }
    else
        puts("a la chuoi doi xung");
    getch();
    return 0;
}
