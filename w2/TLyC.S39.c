#include <stdio.h>
#include<stdlib.h>
#include <windows.h>

int validdate(int d, int m, int y)
{
    int maxd = 31;
    if (d < 1 || d > 31 || m < 1 || m > 12)
        return 0;
    if (m == 4 || m == 6 || m == 9 || m == 11)
        maxd = 30;
    else if (m == 2)
        {
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
            maxd = 29;
        else maxd = 28;
        }
    return d <= maxd;
}

void Choice1()
{
    system("cls");
    int d, m, y;
    printf("Input the date, month and year\n");
    printf("Date: ");
        scanf("%d", &d);
    printf("Month: ");
        scanf("%d", &m);
    printf("Year: ");
        scanf("%d", &y);
    if (validdate(d,m,y))
        printf("Valid date, month and year");
    else
        printf("Invalid date, month and year...");
    getchar();
}
void Choice2() {
    system("cls");
    char a,b,t,c;
    printf("\nInput 2 characters");
    printf("\nFirst character: ");fflush(stdin);
        scanf("%c", &a);
    printf("Second character: ");fflush(stdin);
        scanf("%c", &b);
    if(a>b){
        char t=a; a=b; b=t;
        }
    for ( c=b; c>=a; c--)
		{
        printf("%c : %d\n", c, c);
        }
    getchar();
}

int main()
{   int n;
    do {
        system("cls");
        printf("Select an option:\n");
        printf("1: Checking valided date, month and year or not.\n");
        printf("2: ASCII codes between the 2 inputted characters.\n");
        printf("3: Exit the Program");
        printf("\nPlease enter your choice:");
        scanf("%d",&n);
        switch(n) {
            case 1: Choice1();
                        getchar();
                    break;
            case 2: Choice2();
                        getchar();
                    break;
                    }
        } while(n!=3);
        getchar();
        return 0;
}
