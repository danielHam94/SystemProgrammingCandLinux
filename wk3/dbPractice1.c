//Sung Hoon Ham
//September 13,2019
//dbPractice1.c

#include<stdio.h>

int factorial(int);

int main(void) {
//get input number and find the value of it's factorial
        int n,fact;
        printf("Debugging Practice 1 - Quiz 3, Q3\n\n");
        printf("Please enter the number whose factorial you wish to find: ");
        scanf(" %d", &fact);
        n = factorial(fact);
        printf("The factorial of %d is %d\n",fact,n);
}


int factorial(int number) {
  if(number == 1)
    return 1;
  else
    return number * factorial(number-1);
}
