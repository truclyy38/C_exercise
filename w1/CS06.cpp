#include <stdio.h>
#include<stdlib.h>
#include <iostream>
#include "windows.h"
using namespace std;

void choice1(int A[],int *n)

    {
    cout<<endl<<"Nhap so phan tu = "; cin>>*n;
	int i=1;
	    while(i<=*n)
	    {
		int x;
		cout<<endl<<"Nhap x = "; cin>>x;
		i++;
	    }
    }
void Sw(int a,int b){int t=a;a=b;b=a;}
void sort(int A[],int n)
    {
        for (int i = 0; i < n ; i++)
		{for (int j = i + 1; j < n; j++)
			{if (A[i] > A[j]) Sw(A[i],A[j]);}
	    }
    };
void choice2(int A[],int n)
    {
    int t=0;
    cout<<"Day tang dan la"<<endl;
     while(t<n)
	    {
        cout<<A[t]<<' ';
        t++;
	    }
    }
void choice3(int A[],int n)
    {
        int t=n-1;
      cout<<"Day giam dan la"<<endl;
     while(t>=0)
	    {
        cout<<A[t]<<' ';
        t--;
	    }
        
    }
// void printAsc(int*a, int n)
// {
//     int** adds =(int**) calloc (n, sizeof(int*));
//     int i,j;
//     for (i=0; i<n; i++) adds[i]=&a[i];
//     int* t;
//     for (i=0; i<n-1; i++)
//         for (j=n-1; j>i; j--)
//         if(*adds[j]< *adds[j-1])
//         {
//             t=adds[j];
//             adds[j]=adds[j-1];
//             adds[j-1]=t;
//         }
//     for (i=0;i<n;i++) printf(" %d", *adds[i]);
//     printf("\n");
//     free(adds);
// }


int main()
{   int n;
    int A[100],m;
    do {
        system("cls");
        cout<<"Select an option:"<<endl;
        cout<<"1: Enter an integer aray"<<endl;
        cout<<"2: Sort the array in ascending order and display on the screen"<< endl;
        cout<<"3: Sort the array in descending order and display on the screen"<< endl;
        cout<<"4: Exit the program..";
        cout<<endl<<"Please enter your choice:";
        cin>>n;
        switch(n) {
            
            case 1: choice1(A,&m);
                        getchar();
                    break;
            case 2:  fflush(stdin); 
            		cout<<A[1];
					sort(A,m);
                    choice2(A,m);
            	//	printAsc(A,m);
                    getchar();
                    getchar();
                    break;
            case 3:   sort(A,m);
					choice3(A,m);
					getchar();
            		getchar();
                    break;
                    }
        } while(n!=4);
        getchar();
        return 0;
}
