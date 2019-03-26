#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int a;
    float b;
    char *k;
    printf("Enter an int :");
    scanf("%d", &a);
    printf("Enter a float :");
    scanf("%f", &b);
    printf("Enter a character :");
    scanf("%s", &k);
    printf(">>You enter:\n");
    printf("%d as an integer\n", a);
    printf("%f as a float\n", b);
    printf(" and %s as a character\n", k);
    getchar();
    return 0;
}