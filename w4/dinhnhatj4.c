#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
void Nhapchuoi(char *c){
printf("Please enter string: ");
scanf("%[^\n]", c);
}
void In (char *c, int *d){
	int i,j,k;
for( i=0; i<strlen(c); i++){
char a=c[i];
int b=1;
if (a==' '){
for(j=i; j< strlen(c); j++)
c[j]=c[j+1];
i--;
continue;
}
for( j=i+1; j<strlen(c); j++){
if(a==c[j]){
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
void Solanlap(char *c, int *d){
int max=0,i,j;
for ( i=0; i<strlen(c); i++){
for ( j=i+1; j<strlen(c); j++)
if (d[max]<d[j])
max = j;
}
printf("\n");
for ( i=0; i<strlen(c); i++)
if(d[max]==d[i])
printf("%c ", c[i]);
printf("\n");
for ( i=0; i<strlen(c); i++)
if (d[max]==d[i])
printf("%d ", d[i]);
}

int main(){
char S[50];
int A[50];
star:

system("cls");
Nhapchuoi(S);
printf(" Times of appearance for each character:\n");
In(S, A);
printf("\n");
printf(" Characters that appears the most:");
Solanlap(S, A);
printf("\n");
printf("Press enter to continue another reverse, ESC to exit:");
char c=getch();
while(c!=13 && c!=27)
{
fflush(stdin);
c=getch();
}
if(c==13) goto star;
}
