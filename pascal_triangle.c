#include<stdio.h>
int factorial(int k){
    int fact=1;
    for(int i=2;i<=k;i++){
        fact=fact*i;
    }return fact;
}


int main(){
    int n,i,j;
    printf("enter the width of our pascal triangle:\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=n-i-1;j++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            int icj = factorial(i) / (factorial(j) * factorial(i - j));
            printf("%d ",icj);
        }printf("\n");
    }return 0;
}
