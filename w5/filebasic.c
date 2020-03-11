#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct
	{
		char name[25];
		int age;
		float mark;
	}student;

void  readFile(char  namfile[], student s[], int *pn) 
	{
	*pn=0;
	FILE* f =fopen(namfile,"r");
	if (f!=NULL)
	{
		while(fscanf(f," %40[^;];%4d;%f", s[*pn].name, s[*pn].age,&s[*pn].mark)==3)
			(*pn)++;
		fclose(f);
	}    
	}


void  SortMark(student   s[], int n) 
	{
	int i,j;
	for(i=0;i<n-1;i++)
		for(j=n-1;j>i;j--)
			if(s[j].mark>s[j-1].mark)
			{
				char tName[41];
				strcpy(tName,s[j].name);
				strcpy(s[j].name, s[j-1].name);
				strcpy(s[j-1].name, tName);
				int tage;
				strcpy(tage, s[j].age);
				strcpy(s[j].age, s[j-1].age);
				strcpy(s[j-1].age, tage);
				int tMark=s[j].mark;
				s[j].mark=s[j-1].mark;
				s[j-1].mark=tMark;
			}

	}


void  writeFile(char* namfile[], student* s[], int n)
	{
		FILE* f=fopen (namfile,"w");
	int i;
	for (i=0;i<n;i++)
		fprintf(f,"%s;%d;%1.1f\n",s[i].name, s[i].age, s[i].mark);
	fclose(f);
	}

int main (int argCount, char* args[])
{	student s[50];int n;
	char filename[81]="D:\dataTest.txt";
	char outFilename[]="D:\student2.txt";
	readFile(filename,s,&n);
	SortMark(s,n) ;
	writeFile(outFilename,s, n);
	getchar();
	return 0;
}
