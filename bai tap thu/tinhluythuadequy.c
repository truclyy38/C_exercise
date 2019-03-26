#include<stdio.h>
#include <conio.h>
int Sum(int n)
{if (n==1) return 1; else return n*Sum(n-1);}
int main
{int n;
scanf("%d",&n);
printf("luy thua la %d",Sum(n));
getch();
return 0;
}
//de quy giong như bỏ kẹo vào bình r lấy ra, cái gì bỏ vào trc thì lấy ra sau, như vậy tính sum 1 trước 
//rồi ms tính sum n
