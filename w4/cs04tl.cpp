#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

void Nhapchuoi(char c[])
{
        printf("Please enter string: ");
        fflush(stdin);
        scanf("%[^\n]", c);
}
void In (char *c, int *d)
{
    	int i,j,k;
    for( i=0; i<strlen(c); i++)
    {
        char a=c[i];
        int b=1;
        if (a==' '){
        for(j=i; j< strlen(c); j++)
        c[j]=c[j+1];
        i--;
        continue;
    }
    for( j=i+1; j<strlen(c); j++)
    {
        if(a==c[j])
        {
        for( k=j; k<strlen(c); k++)
        c[k]=c[k+1];
        b++;
        j--;
        }
    }
    d[i]=b;
    }
    for( i=0; i<strlen(c); i++)
    printf("%c ", c[i]);
    printf("\n");
    for( i=0; i<strlen(c); i++)
    printf("%d ", d[i]);
}
void Solanlap(char *c, int *d)
{
        int max=0,i,j;
        for ( i=0; i<strlen(c); i++)
    {
        for ( j=i+1; j<strlen(c); j++)
        if (d[max]<d[j]) max = j;
    }
    printf("\n");
    for ( i=0; i<strlen(c); i++)
    if(d[max]==d[i])
    printf("%c ", c[i]);
    printf("\n");
    for ( i=0; i<strlen(c); i++)
        if (d[max]==d[i]) printf("%d ", d[i]);
}

int main()
	{	char S[50];
        int A[50],a;
 		do
   		 {  system("cls");
	        printf("\n1- Enter a string.\n");
	        printf("2- Display each character that appears the mosr in the string.\n");
	        printf("3- Display character that apears the most in the string.\n");
	        printf("4- Enter to continue, press esc to exit\n");
	        printf("Enter your choice\n");
	        scanf("%d",&a);
        switch(a)
        {
            case 1:Nhapchuoi(S); getch(); break;
            case 2: In(S, A); getch();break;
            case 3:  Solanlap(S, A); getch();break;
            default: {  if(a==27)  return 0;
                        }
        }

    } while (a!=27); 
    


    getchar();
    return 0;
}
