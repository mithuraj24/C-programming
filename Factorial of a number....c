//Assignment 3: Calculate the factorial of a number using a function.
//Mithuraj Boruah
//roll no:28
//date:26/09/24

#include<stdio.h>
int fact (int);
int main()
   {
    int num;
    int factorial;
    printf("\nEnter a number:");
     scanf("%d", & num);
    factorial=fact(num);
    printf("factorial of %d=%|d\n", num , factorial);
    return 0;
    }
    int fact (int num)
    {
        int i
        int factorial = 1;
        for(i=1; i<=num; i++)
        factorial = factorial*i;
        return(factorial);
    }
