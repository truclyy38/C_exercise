#include <stdio.h>
#include <conio.h>
#include <math.h>

void fBin()
    {   int n,b=0,i=0;
        printf("Enter a number in binary ");
        scanf("%d",&n);
        while(n!=0){b+=n%10*pow(2,i);i++;n/=10;}
        printf("Convert to decimal is %d",b);
    }
void fOc()
    {
        int n,i=0,o=0;
        printf("Enter a number in octal ");
        scanf("%d",&n);
        while(n!=0){o+=n%10*pow(8,i);i++;n/=10;}
        printf("Convert to decimal is %d",o);
    }
void fHex()
    {
        int n;
        printf("Enter a number in hexa ");
        scanf("%x",&n);
        printf("Convert to decimal is %d",n);
    }
int main(int argc, char const *argv[])
{   
    int a;
    do
    {   
        printf("\n1- Convert binary number to decimal number\n");
        printf("2- Convert octal number to decimal number\n");
        printf("3- Convert hexadecimal number to decimal number\n");
        printf("4- Exit\n");
        printf("Enter your choice");
        scanf("%d",&a);
        switch(a)
        {
            case 1: fBin();break;
            case 2: fOc(); break;
            case 3: fHex();break;
        }

    } while (a>=1&&a<4);

    getchar();
    return 0;
}