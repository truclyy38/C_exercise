#include <stdio.h>
#include <conio.h>
#include <string.h>

int main ()
{
	char str[20];
	int i, key;
	do
	{	
	printf ("Please enter a string: \n");
	gets (str); 
	for (i = strlen(str); i >= 0; i--)
		{
		if (str[i] == ' ')
			{	
				str[i] = '\0';
				printf ("%s ", &str[i] + 1);	
			}
		}	
	printf ("%s\n", str);
	key = getch();
	} while (key != 27); 
	return 0;
}