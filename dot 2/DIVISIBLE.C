#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main(int argc, char const *argv[])

{
    int i, d, n;
       printf("INPUT\n");
       printf("n "); scanf("%d",&n);
       printf("d "); scanf("%d",&d);
      for (i = d; i <= n; i+=d)
    {
      
        printf("%3d",i);
    }
    getch();
    return 0;
}
