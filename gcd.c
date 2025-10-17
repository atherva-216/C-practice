 Program: Find Greatest Common Divisor (GCD)
 Author: Atherva Mishra
 Description:
      This program calculates the Greatest Common Divisor (GCD),
      also known as the Highest Common Factor (HCF), of two integers.
      It uses the Euclidean Algorithm, which repeatedly replaces
      the larger number with its remainder when divided by the smaller one,
      until the remainder becomes zero. The final non-zero value is the GCD.

#include<stdio.h>
int min(int a,int b){
    int minimum;
    if(b<a){
        minimum=b;
    }
    if(a<b){
        minimum=a;
    }
    return minimum ;
}
int main(){
    int i,a=12,b=60;
    int hcf;
    for(i=1;i<=min(12,60);i++){
        if(a%i==0&&b%i==0){
            hcf=i;
        }
    }
    printf("the gcd is %d",hcf);
    return 0;
}
