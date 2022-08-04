#include <stdio.h>
    void Sort()
    {
 
        int i, j, a, n, number[30];
        printf("\nEnter the number of argu need to pass for sort \n");
        scanf("%d", &n);
 
        printf("\nEnter the numbers to sort \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
 
        printf("The numbers are sorted and  arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
 
    }
