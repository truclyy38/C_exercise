#include <stdio.h>
#include <string.h>
#include <conio.h>


void Add(char s[][31], int *n)
{
	char name[31];
	printf("Input a name:"); 
    fflush(stdin);
    scanf("%30[^\n]",name);
		if (*n<100) 
        {
			strcpy(s[*n],name);
            printf("Student has been added to list successfully!");
			(*n)++;
		}
        else printf("The list has full. It cannot add a new student.");
}

int Search(char s[][31], int n, char x[31])
	{	int i;
		for(i=0;i<n;i++) if(x==s[i]) return i;
        return -1;
	}
void Remove(char s[][31], int *n,int k)
	{	int i;
        for(i=k;i<*n;i++) {s[i][31]=s[i+1][31];*n--;}
    }


void swap(char a[31], char b[31] )
	{	int i,j;
		char t[31];
		strcpy(t,a);
		strcpy(a,b);
		strcpy(b,t);
	}
void sort(char s[][31], int n)
{   int i,j;
	for ( i=0; i<n-1; i++)
    	for (j=i+1; j<n; j++ )
    		if (strcmp(s[i],s[j])>0)   swap(s[i],s[j]);
}
void output(char s[][31], int n)
{   int i;
	for( i=0;i<n;i++) 
		printf("%d.%s \n", i, s[i]);
}
int main(int argc, char const *argv[])
{  int n=0,a,k;
   char  s[100][31];
   char x[31];
    do
    {   
        printf("\n1- Add a student name into the array.\n");
        printf("2- Remove a student name.\n");
        printf("3- Search a student name.\n");
        printf("4- Output student names in ascending orders alphabetically.\n");
        printf("5- Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&a);
        switch(a)
        {
            case 1: Add(s,&n);break;
            case 2: 
                    printf("Input the name to remove: ");
					fflush(stdin);scanf("%30[^\n]",x);
					getchar();
                    k=Search(s,n,x);
                    printf("Vi tri thu %d",k);
                    // if(k>=0)
                    //     {Remove(s,&n,k); 
                    //      printf("Student name has been removed from list successfully!");
                    //      }
                    // else printf("Student name doesn't exist in list.");
                    break;
            case 3: 
                    printf("Input the name to search: ");fflush(stdin);scanf("%30[^\n]",x);
                    k=Search(s,n,x);
                    if(k>=0) printf("The name %5s is at position %d",s[k],k);
                    else printf("The name is not exist");
                    break;
            case 4: sort(s,n);
                    output(s,n);break;
        }

    } while (a>=1&&a<5); 
	
    getchar();
    return 0;

}
