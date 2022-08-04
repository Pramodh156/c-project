#include <stdio.h>
void Sum_of_two() {    

    int number1, number2, sum;
    
    printf("\nEnter two integers to find sum: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d\n", number1, number2, sum);
   // return 0;
}
