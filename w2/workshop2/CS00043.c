//TrucLy_SE1408//
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

int a[100], n;

void add()

{
    system("cls");
    int i;
    printf("Please enter size of array: ");
    scanf("%d", &n);
    for(i=0; i<n ; i++)
    {
        printf("Enter Element A[%d]:",i);
        scanf("%d",&a[i]);
    }
    system("PAUSE");
    system("cls");


}
void search()
{
    system("cls");
    int i, search;
    printf("Enter a number to search\n");
    scanf("%d", &search);
	printf("%d is present at locations :\n", search);
  	for (i = 0; i < n; i++)
 	 {
   		 if (a[i] == search)
    		{
  			    printf("%d\t",i);
  			}
 	 }
	  printf("\n");	
  	if (find(search,a)==0)
    {
    printf("%d isn't present in the array.\n", search);
  	}

    system("PAUSE");
    system("cls");


}
int find(int val,int a[])
{	int i;
	for (i = 0; i < n; i++)
  {
    if (a[i] == val) return i;
    
  }
  return 0;
	
}
void del()
{
    system("cls");
    int val,j,i;
    printf("\nEnter the element to delete: ");
    scanf("%d", &val);
    for (j = find(val,a); j < n; j++)
         {
			a[j] = a[j + 1];
          }
          n--;
    
    printf("\nThe new array is \n");
    for (i = 0; i < n; i++)
        {
        printf("%d ", a[i]);
    }
    getchar();
    system("PAUSE");
    system("cls");


}
void alldel()
{
    system("cls");
    int val,j,i;
    printf("\nEnter the element to delete: ");
    scanf("%d", &val);
    for (i = 0; i < n; i++) 
	{
        if (a[i] == val)
		 {
           for (j = i; j < n; j++)
               a[j] = a[j + 1];
           n--;i--;
           
      	}
    }

    printf("\nThe new array is \n");
    for (i = 0; i < n; i++)
        {
        printf("%d ", a[i]);
    }
    system("PAUSE");
    system("cls");

}
void print()
{
    system("cls");
    int i;
    for(i=0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    getchar();
    system("PAUSE");
    system("cls");


}
void ascend()
{
    system("cls");
    int tg,i,j;
    for( i = 0; i < n - 1; i++)\
    {
        for( j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
    printf("The array sorted in ascending:\n");
	for( i = 0 ; i < n ; i++)
	{
		printf("%d\t",a[i]);
	}
    system("PAUSE");
    system("cls");

}
void descend()
{
    system("cls");
    int tg,i,j;
    for( i = 0; i < n - 1; i++)
    {
        for( j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;
            }
        }
    }
    printf("The array sorted in ascending:\n");
	for( i = n-1 ; i >=0 ; i--)
	{
		printf("%d\t",a[i]);
	}
    system("PAUSE");
    system("cls");
}
int main()
{
    system("cls");
    int choice;
    do{
    printf("1 Add a values\n");
    printf("2 Search a values\n");
    printf("3 Remove the first existence of a value\n");
    printf("4 Remove all existence of a value\n");
    printf("5 Print out the array\n");
    printf("6 Sort the array in ascending order \n");
    printf("7 Sort the array int descending order\n");
    printf("8 Exit..\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1: add();
                break;
        case 2: search();
                break;
        case 3: del();
                break;
        case 4: alldel();
                break;
        case 5: print();
                break;
        case 6: ascend();
                break;
        case 7: descend();
                break;

    }
    }
    while(choice > 0 && choice <8);
    getchar();
}
