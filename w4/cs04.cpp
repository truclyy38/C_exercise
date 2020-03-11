#include <stdio.h>
#include <string.h>

void Add(char s[])
{
	printf("Input a name:"); 
    fflush(stdin);
    gets(s);

}
void int Check(int count,char a, char b[])
	{ int j;
		for (j=0;j<count;j++) if (strcmp(a,b[j])) return 0;
		else return 1;
	}
void int Dem(char a[],char x)
	{	int c=0,i;
		while (a[i]!='\0')
		 {
		 	if(strcmp(a[i],x)==0) c++;
		 	i++;
		 	
			}
		return c;
	}
void Timesletter(char s[], char letter[30], int times[30])
	{
		int i=1,j,n,count=1;
		n=strlen(s);
		strcpy(letter[0],s[0]);
		while(s[i]!= '\0')
			{
			if (Check(count,s[i],letter)==1) strcpy(letter[count++],s[i]);
			i++;
			}
		i=0;
		while (letter[i]!='\0')
			{
			time[i]=Dem(s,letter[i]);
			i++;
			}
	}

int main()
	{	int a,n=0;
		char s[31], letter[31],time[31];
 		do
   		 {  
	        printf("\n1- Enter a string.\n");
	        printf("2- Display each character that appears the mosr in the string.\n");
	        printf("3- Display character that apears the most in the string.\n");
	        printf("4- Enter to continue, press esc to exit\n");
	        printf("Enter your choice\n");
	        scanf("%d",&a);
        switch(a)
        {
            case 1: Add(s);break;
            case 2: Timesletter(s,letter,time);
					puts(s);
                    break;
            case 3: 
                   
                    break;
        }

    } while (a!=27); 

    getchar();
    return 0;
}
