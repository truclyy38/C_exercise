#include <stdio.h>
// #include <stdlib.h>

void Output(int A[], int n)
{	int i;
    for ( i = 0; i < n; i++)
        printf(" %d\t", A[i]);
}

void Input(int A[], int *n){
    int ok, num;
    do{
        printf("Input a number: ");
        scanf(" %d", &num);
        ok = (num != 0);
        if(ok){
            A[*n]=num;
            (*n)++;
            }
    }while (ok);
    printf("The array is: ");
    Output(A, *n);
}

int Tong(int A[], int n)
{
    int S = 0, i;
    for (i = 0; i < n; i++)
        S += A[i];
    return S;
}

int main(int argc, char argv[])
{
    int n=0;
    int A[100];
    Input(A,&n);
    printf("Sum of array: %d", Tong(A,n));
    //fflush(stdin);
    getch();
    return 0;
}
