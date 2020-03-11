#include <stdio.h>
#include <conio.h>
#define MaxR 20
#define MaxC 20

void InMatrix(int A[][MaxC], int r, int c)
{
    int i,j;
    
    printf("Input the arrays \n");
    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++) 
                {   printf("X[%d][%d] ",i,j);
                    scanf("%d",A[i][j]);
                }
        }
};
void outMatrix(int A[][MaxC],int r, int c)
    { int i, j;
         for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++) 
                {   
                  printf("%8d",A[i][j]);
                }
                printf("\n");
        }
    };
void SumMatrix(int A[][MaxC], int B[][MaxC],int C[][MaxC],int r, int c)
    {   int i,j;
         for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++) 
                {   
                   C[i][j]=A[i][j]+B[i][j];
                }
        }

    };

int main(int argc, char const *argv[])
{   int r,c;
    int A[MaxR][MaxC],B[MaxR][MaxC],C[MaxR][MaxC];
    printf("Input the row and column..\n");
    scanf("%d%d",&r,&c);
    InMatrix(A,r,c);
    InMatrix(B,r,c);
    SumMatrix(A,B,C,r,c);
    outMatrix(C,r,c);
    getch();
    return 0;

}
