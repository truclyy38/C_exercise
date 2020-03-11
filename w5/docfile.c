#include <stdio.h>
#include <string.h>
#include <ctype.h>

void  readFile(char*  namefile[]) 
	{
	    char str[100];
	    FILE* f =fopen(namefile,"r");
	   if(f == NULL ) 
	    { printf("error");
	    }
	
	    else 
        {while(fscanf(f,"%s",str)!= EOF) 
        printf("%s\n",str);
        fclose(f);}
	}

int main (int argCount, char* args[])
{	
	char filename[81]="D:/dataTest.txt";
	readFile(filename);
	getchar();
	return 0;
}