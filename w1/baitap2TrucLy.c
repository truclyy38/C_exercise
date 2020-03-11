#include <stdio.h>
#include <conio.h>

int n, tram, chuc, dv;
void convert1(){
    switch(dv){
        case 0: printf(" ");break;
        case 1: printf("one");break;
        case 2: printf("two");break;
        case 3: printf("three");break;
        case 4: printf("four");break;
        case 5: printf("five");break;
        case 6: printf("six");break;
        case 7: printf("seven");break;
        case 8: printf("eight");break;
        case 9: printf("nine");
        }}
void convert2(){
    if(chuc==1){switch(dv){
			case 0: printf("ten"); break;
			case 1: printf("eleven"); break;
			case 2: printf("twelve"); break;
			case 3: printf("thirteen"); break;
			case 4: printf("fourteen"); break;
			case 5: printf("fifteen"); break;
			case 6: printf("sixteen"); break;
			case 7: printf("seventeen"); break;
			case 8: printf("eighteen"); break;
			case 9: printf("nineteen"); 
		}} 
        else{
            switch(chuc){
                case 2: printf("twenty-"); break;
			case 3: printf("thirty-"); break;
			case 4: printf("forty-"); break;
			case 5: printf("fifty-"); break;
			case 6: printf("sixty-"); break;
			case 7: printf("seventy-"); break;
			case 8: printf("eighty-"); break;
			case 9: printf("ninety-"); 
            }
            convert1();
        } 

}
void convert3(){
        switch(tram){
			case 1: printf("one hundred- "); break;
			case 2: printf("two hundred- "); break;
			case 3: printf("three hundred- "); break;
			case 4: printf("four hundred- "); break;
			case 5: printf("five hundred- "); break;
			case 6: printf("six hundred- "); break;
			case 7: printf("seven hundred- "); break;
			case 8: printf("eight hundred- "); break;
			case 9: printf("nine hundred- "); 
		}
        convert2();

}

int main(){
    int exit;
	do
	{
    printf("Please enter string in numeric format:");
	scanf("%d",&n);
    tram=n/100; chuc=n%100/10;dv=n%10;
    printf("The converted string: ");
    if (n==0) printf("zero");
    if (tram==0 && chuc==0&& dv!=0 ) convert1();
    if (tram==0 && chuc!=0 ) convert2();
    if (tram!=0) convert3();
    printf("\n");
    exit = getch();}
    while (exit != 27); 

	return 0;
}
