
#include <stdio.h>

int main()
{
    char name[10];
    int age;

    printf("Enter your Name: ");
    scanf("%9s", name);

    printf("\nEnter your Age: ");
    scanf("%d", &age);

    if (age < 0 || age > 100) {
        printf("INVALID AGE!\n");
    }
    else if (age >= 18) {
        printf("\nYour name is %s, you're an ADULT, and your age is %d!\n", name, age);
    }
    else {
        printf("\nYour name is %s, you're a MINOR, and your age is %d!\n", name, age);
    }

    return 0;
}
