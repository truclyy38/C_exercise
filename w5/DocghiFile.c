#include <stdio.h>
#include <ctype.h>
#define TRUE 1
#define FALSE 0
int exist (char* filename)
{
	int existed = FALSE;
	FILE* f= fopen(filename,"r");
	if (f!= NULL)
	{
		existed = TRUE;
		fclose(f);
	}
	return existed;
}
void writeFile(char* filename)
{
     FILE* f= fopen(filename, "a");
	
	char line [201];
	int length = 0;
	fflush (stdin);
	do
	{
		gets(line);
		length = strlen(line);
		if (length>0)
		{
			fputs (line, f);
			fputs("\n", f);
		}
	}
	while (length>0);
	fclose(f);
}
int printFile (char* filename)
{
	char c;
	if (exist (filename)==0)
	{
		printf("The file %s does not exist.\n", filename);
		return 0;
	}
	FILE* f= fopen (filename, "r");
	while ((c=fgetc(f))!=EOF)
	putchar (c);
	fclose (f);
	return 1;
}
int main (int argCount, char* args[])
{
	char filename[81];
	printf ("Program for writing then reading a file\n");
	printf ("Enter a filename: ");
	gets (filename);
	printf("Write file: \n");
	writeFile(filename);
	printf ("Data in the file %s: \n", filename);
	if (printFile(filename)==0)printf("File error!\n");
	else printf("Writing file fail!\n", filename);
	getchar();
	return 0;
}
