#include<stdio.h>
  int main()
{

  float weight;
  float height;
  float BMI;

  printf("Enter your Weight: ");
  scanf("%f", &weight);

  printf("\nEnter your Height: ");
  scanf("%f", &height);

  BMI= (weight/(height * height));

  printf("\nBMI: %.2f", BMI);

  if(BMI>=30){
    printf("\nCategory: Obese!");
  }

  else if(BMI>=25){
    printf("\nCategory: Overweight!");
  }

  else if(BMI>=18.5){
    printf("\nCategory: Normal!");
  }

  else{
    printf("\nCategory: Underweight!");
  }

  return 0;
}
