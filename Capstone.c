#include<stdio.h>
#include<string.h>
    int main()
{
    char travelClass;
    
    float baggageWeight,
          baseFare,
          allowance,
          excessFare,
          totalFare;

    printf("Enter Travel class (E/Economy or B/Business): ");
    scanf(" %c", &travelClass);

    printf("\nEnter Baggage weight: ");
    scanf("%f", &baggageWeight);

    if(baggageWeight<=0){
        printf("\nINVALID BAGGAGE WEIGHT!");
        return 1;
    }

    switch(travelClass){

        case 'E':
        case 'e':
        baseFare=2500.0;
        allowance=20;
       
        break;


        case 'B':
        case 'b':
        baseFare=6500.0;
        allowance=40;
        
        break;


        default:
        printf("\nERROR: Invalid Travel Class!");

        return 1;
    }

    if(baggageWeight>allowance){
        excessFare = (baggageWeight - allowance) * 150;
    }
    else{
        excessFare = 0; 
    }

    totalFare = baseFare+excessFare;

    printf("\t-----BOARDING SUMMARY-----");
   
      if(travelClass=='E'|| travelClass =='e'){
        printf("\nTravel Class: Economy");
    }
   
    else{
        printf("\nTravel Class: Business");
    }

    printf("\nBase Fare: PHP %.2f", baseFare);
    printf("\nBaggage Weight: %.2f (Allowance: %.0f kg)", baggageWeight, allowance);
    printf("\nExcess Baggage Fee: PHP %.2f", excessFare);
    printf("\nTotal Fare: PHP %.2f", totalFare);

    printf("\n\t---------------------------");
    return 0;
}