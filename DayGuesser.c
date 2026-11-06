#include<stdio.h>
    int main()
{

    int num;

    printf("Enter a number from(1-7): ");
    scanf("%d", &num);

    switch(num){

        case 1:
        printf("Number %d is Monday!", num);
        break;

        case 2:
        printf("Number %d is Tuesday!", num);
        break;     
     
        case 3:
        printf("Number %d is Wednesday!", num);
        break; 

        case 4:
        printf("Number %d is Thursday!", num);
        break;

        case 5:
        printf("Number %d is Friday!", num);
        break;

        case 6:
        printf("Number %d is Saturday!", num);
        break;

        case 7:
        printf("Number %d is Sunday!", num);
        break;
        
        default:
        printf("INVALID INPUT!");
        break;
    }


    return 0;
}