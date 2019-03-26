#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main(int argc, char const *argv[])

{
    int s, n;
    s=0;
    do{
    printf("Enter a number ");scanf("%d", &n);s+=n;
} while (n!=0);
    printf("Tong la %d",s);
    getch();
    return 0;
}
