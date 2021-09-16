int main()
{

    //Factoriel of number - Kaloyan Angelov

    int num, tempNum, nextNum, i;

    do {

    printf(" \n -- -- Find Factoriel -- -- ");
    printf(" \n\n -- Enter your number: ");

    scanf("%d", &num);

    //num = 5; // 5

    nextNum = num - 1;

    tempNum = num; // 5

    printf("\n\n");

    system("clear");

    printf("\n\n -- ");


    for(i = (num - 1); i > 0; i--) { // i = 5 - 1

        printf("%d * %d = ", tempNum, nextNum);

        tempNum = tempNum * nextNum; // 5 * 4 = 20 | 20 * 3 = 60 | 60 * 2 = 120; 120 * 1 = 120;

        nextNum--;

    }

    printf("%d -- \n\n", tempNum);

    } while (num != 0);

    return 0;
}
