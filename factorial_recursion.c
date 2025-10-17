 Program: Factorial Using Recursion
   Author: Atherva Mishra
   Description:
      This program calculates the factorial of a given positive integer
      using a recursive function. The factorial of a number n (written as n!)
      is defined as the product of all positive integers less than or equal to n.

      
        #include <stdio.h>

int factorial(int n){
    if(n==1) return 1;
    return n*factorial(n-1);
}
int main(){
    int fact;
    fact=factorial(5);
    printf("%d",fact);
    return 0;
}
