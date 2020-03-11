#include <stdio.h>
#include <string.h>
#include <conio.h>

void output(char s[][31], int n){
	for( int i=0;i<n;i++) 
		printf("%d.%s \n", i, s[i]);
}
void input(char s[][31], int *n){
	int ok; char name[31];
	do{
		printf("input a name:"); fflush(stdin);				scanf("%30[^\n]",name);     //gets(name);
		ok=(name[0]!=32); 	         //ok=(name[0]!=' '); 
		if (ok) {
			strcpy(s[*n],name);
			(*n)++;
		}
	}while (ok);
//	printf("After adding: \n");	output(s, *n);	
}
void swap(char a[], char b[] )
	{	int i,j;
		char t[31];
		strcpy(t,a);
		strcpy(a,b);
		strcpy(b,t);
	}
void sort(char s[][31], int n){
	for (int i=0; i<n-1; i++)
    	      for (int j=i+1; j<n; j++ )
    		if (strcmp(s[i],s[j])>0)   swap(s[i],s[j]);
   
int main(int argc, char const *argv[])
{  int a;
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
	int s[100][31],n;
    input(s,&n) ;
    output(s,n);
    sort(s,n);
	printf("After sorting: \n");  output(s, n);
    getchar();
    return 0;

}
