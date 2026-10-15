#include<stdio.h>
  int main()
{
    int grade;

    printf("Enter your Grade: ");
    scanf("%d", &grade);


    if(grade<0||grade>100){
      printf("\nINVALID GRADE!");
    }

    else if(grade>=90){
      printf("\nYour Grade is A!");
    }

    else if(grade>=80){
      printf("\nYour Grade is B!");
    }

    else if(grade>=70){
      printf("\nYour Grade is C!");
    }

    else if(grade>=60){
      printf("\nYour Grade is D!");
    }

    else{
      printf("\nYour Grade is F!");
    }

     printf("\nCONGRATS, KEEP IT UP!");


  return 0;
}
