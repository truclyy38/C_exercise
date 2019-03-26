#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
        int a, b;
        char phep_toan;
        printf("Enter 1st number:");
        scanf("%d", &a);
        printf("Enter 2st number:");
        scanf("%d", &b);
        printf("Enter operant:");
        scanf("%s", &phep_toan);

        if
               ( phep_toan == "+" ) printf(" the result of % d + % d = % d\n ", a, b, a + b);

        if (phep_toan == "-")
                printf("the result of %d - %d= %d\n", a, b, a - b);

        if (phep_toan == "*")
                printf("the result of %d * %d= %d\n", a, b, a * b);

        if (phep_toan == "/")
                printf("the result of %d / %d= %f\n", a, b, a / (float)b);

        if (phep_toan == "%") printf("the result of %d % %d= %d\n", a, b, a % b);

        getchar();
        return 0;
}
