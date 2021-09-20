#include <stdio.h>
#include <stdlib.h>

int main()
{

    int number;

    int tempNumber;

    int sum = 0;

    int i;

    do {

        printf("\n\n -- Enter your number to find factoriel: ");

        scanf("%d", &number);

        tempNumber = number; // 5

        printf("\n\n");

        for(i = number-1; i > 0; i--) { // i = 4 ;

            printf("%d * %d", tempNumber, i);

            tempNumber = tempNumber * i;

            printf(" = %d | ", tempNumber);

        }

    } while(number != 0);

    return 0;
}
