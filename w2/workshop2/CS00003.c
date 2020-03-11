//TrucLySE1408//
#include <stdio.h>

int A[100],n;
void Enter()
{
	int i;
	printf("Please enter size of array: ");
	scanf("%d",&n);
	for( i = 0 ; i < n ; i++)
	{
		printf("Enter element A[%d]:",i);
		scanf("%d",&A[i]);
	}

}
void sort()
{
	int tg,i,j;
    for( i = 0; i < n - 1; i++){
        for( j = i + 1; j < n; j++){
            if(A[i] > A[j]){
                tg = A[i];
                A[i] = A[j];
                A[j] = tg;
            }
        }
    }

}
void As()
{	int i;
	printf("The array sorted in ascending:\n");
	for( i = 0 ; i < n ; i++)
	{
		printf("%d\t",A[i]);
	}
}
void add()
{
	printf("\nPlease enter new value: ");
	scanf("%d", &A[n++]);
}
int main()
{
    int choice;
    do{
    printf("\n\n\tMENU\n\n");
    printf("1. Start the program\n");
    printf("2. Exit the program\n");
    printf("SELECT YOUR CHOICE\n");
   scanf("%d", &choice);
   switch(choice)
   {
    case 1:     Enter();
                sort();
                As();
                printf("\nDone\n");
                add();
                sort();
                As();
                printf("\nDone\n");
                break;

    case 2:     printf("Click Enter to exit");
                return 0; break;



   }
    }while(choice > 0 && choice <= 2);
}
