//TrucLy1SE1408
#include <stdio.h>
#include <stdlib.h>
int find(long decimal_number)
{
    if(decimal_number == 0 )
        return 0;
    else
        return (decimal_number %2 +10*find(decimal_number/2));
}
void bin()
{
    long decimal_number;
    printf("Convert Decimal to Binary program\n");
    printf("\tEnter decimal number: ");
    scanf("%d", &decimal_number);
    printf("\tBinary number: %ld\n", find(decimal_number));
}
int main()
{

    int choice;
    do
    {
        printf("\tMENU\n");
        printf("1 Start the program\n");
        printf("2 Exit the program\n");
        printf("SELECT YOUR CHOICE\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: bin();
                    break;
            case 2: printf("Click Enter To exit the program");
                    return 0;
                    break;
        }
    }
    while(choice > 0 && choice < 3);
}

