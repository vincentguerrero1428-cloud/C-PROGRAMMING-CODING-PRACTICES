#include<stdio.h>
    int main()
{
    int num;

    printf("\t-------DAY GUESSER-------");
    printf("\nEnter a number: ");
    scanf("%d", &num);

    switch(num){

        case 1:
            printf("\nDay %d is Monday!", num);
            break;

        case 2:
            printf("\nDay %d is Tuesday!", num);
            break;

        case 3:
            printf("\nDay %d is Wednesday!", num);
            break;

        case 4:
            printf("\nDay %d is Thursday!", num);
            break;

        case 5:
            printf("\nDay %d is Friday!", num);
            break;

        case 6:
            printf("\nDay %d is Saturday!", num);
            break;

        case 7:
            printf("\nDay %d is Sunday!", num);
            break;

        default:
        printf("\nINVALID INPUT!");
    }

    return 0;
}