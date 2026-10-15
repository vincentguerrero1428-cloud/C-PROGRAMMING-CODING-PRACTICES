#include<stdio.h>
  int main()
{

  int year;

  printf("Enter a year: ");
  scanf("%d", &year);


  if((year %4==0 && year %100!=0)|| year %400==0){
    printf("\n%d IS a leap year!", year);
  }

  else{
    printf("\n%d IS not a leap year!", year);
  }

  return 0;
}
