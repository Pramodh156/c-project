#include <stdio.h>  
   
void Biggest_of_two() {  
    int a, b;  
    printf("\nPlease Enter Two different values\n");  
    scanf("%d %d", &a, &b);  
    
    if(a > b) 
    {
        printf("%d is Largest\n", a);          
    } 
    else if (b > a)
    { 
        printf("%d is Largest\n", b);  
    } 
    else 
    {
	printf("Both are Equal\n");
    }
   
   // return 0;  
}
