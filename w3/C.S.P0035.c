#include<stdio.h>
#include<stdlib.h>

void input(int*l,int*w) {
	printf("Enter size of 2 matrix : ");
	scanf("%d %d", l, w);
}
void inputm1(int**m1,int l,int w) {
	printf("Accept matrix 1: \n");
	for(int i=0;i<l;i++)
		for(int j=0;j<w;j++)
			scanf("%d", &m1[i][j]);
}

void inputm2(int**m2,int l,int w) {
	printf("Accept matrix 2: \n");
	for(int i=0;i<l;i++)
		for(int j=0;j<w;j++)
			scanf("%d", &m2[i][j]);
}

void sum(int**m1,int**m2,int l,int w) {
	printf("\nm = m1 + m2:\n");
	for(int i=0;i<l;i++) {
		for(int j=0;j<w;j++)
	printf("%d ", m1[i][j]+m2[i][j]);
	printf("\n");
	}
}

int main() {
	int l,w;
	input(&l,&w);
	int**m1=(int**)malloc(l*sizeof(int*));
	int**m2=(int**)malloc(l*sizeof(int*));
	for(int i=0;i<l;i++) {
		m1[i]=(int*)malloc(w*sizeof(int));
		m2[i]=(int*)malloc(w*sizeof(int));
	}
	inputm1(m1,l,w);
	inputm2(m2,l,w);
	sum(m1,m2,l,w);
    free(m1);
    free(m2);
    getch();
    return 0;
}
