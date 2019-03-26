#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main(int argc, char const *argv[])

{
    int n, i, m = 1,d;
   
        printf("ENTER NUMBER:");
    scanf("%d", &n);
    d = sqrt(n);
    for (i = 2; i <= d; i++)
    {
        if(n % i == 0) m = 0;
    }
    switch(m)
    {
    case 1:
        printf("It is prime number");
        break;
    case 0:
        printf("It is not  prime number");
    };
    
getch();
return 0;
}
