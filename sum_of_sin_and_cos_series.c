Program : Sum of Sine and Cosine Series
Author  : Atherva Mishra
Date    : October 23, 2025
Language: C
Description:
This program calculates the sum of sine and cosine series
for a given angle (in radians) using the Taylor series expansion.
The user enters the angle and the number of terms, and the program
displays the approximate value of sin(x) + cos(x).

Concepts Used:
 Recursion (for factorial calculation)
 Loops and functions
 Mathematical computations using <math.h>


#include<stdio.h>
#include<math.h>

int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*fact(n-1);
}

double sinx(double x,int n){
    int i;
    double sin_count = 0.0;
    for(i=0;i<n;i++){
        sin_count = sin_count + (pow(-1,i) * pow(x,2*i+1)) / fact(2*i+1);
    }
    return sin_count;
}

double cosx(double x,int n){
    int i;
    double cos_count = 0.0;
    for(i=0;i<n;i++){
        cos_count = cos_count + (pow(-1,i) * pow(x,2*i)) / fact(2*i);
    }
    return cos_count;
}

int main(){
    int n;
    double x;
    printf("enter the angle in radians and value upto which we want our sum of sin and cos");
    scanf("%lf %d",&x,&n);
    printf("the value of the count is\n%lf", cosx(x,n) + sinx(x,n));
    return 0;
}
