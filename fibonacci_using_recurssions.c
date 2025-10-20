#include <stdio.h>
int fibo(int n){
    if(n==1){
        return 1;
    }
    if(n==0){
        return 0;
    }
    return fibo(n-1)+fibo(n-2);
}




int main() {
    int decimal=fibo(6);
    printf("the value is %d",decimal);
    return 0;
}
