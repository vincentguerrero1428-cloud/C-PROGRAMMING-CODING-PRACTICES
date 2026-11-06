#include<stdio.h>
    int main()
{

    int num1,num2;
    char operators;
    float result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operators: ");
    scanf(" %c", &operators);

    printf("Enter second number: ");
    scanf("%d", &num2);    



    switch(operators){

    case '+':
    result=num1+num2;
    printf("\nResult: %.2f", result);
    break;

    case '-':
    result=num1-num2;
    printf("\nResult: %.2f", result);
    break; 
    
    case '*':
    result=num1*num2;
    printf("\nResult: %.2f", result);
    break;   

    case '/':
    if(num2==0){
        printf("CANNOT BE DIVIDED BY ZERO!");
    }

    else{
    result=(float)num1/num2;
    printf("\nResult: %.2f", result);
    }
    break;

    default:
    printf("INVALID INPUTS!");
    break;
    }

    return 0;
}