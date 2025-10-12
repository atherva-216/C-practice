#include<stdio.h>
int factorial(int k){
  int fact=1;
    for(int i=2;i<=k;i++){
        fact=fact*i;
    }return fact;
}

int main(){
  int n,r;
  printf("enter the value of n and r\n");
  scanf("%d%d",&n,&r);

  if (n < r || n < 0 || r < 0) {
        printf("Invalid input! Make sure n >= r and both are non-negative.\n");
        return 1;
    }
int factn=factorial(n);
int factr=factorial(r);
int factnr=factorial(n-r);
float ncr=(float)factn/(factn*factnr);
printf("the nCr is:%f\n",ncr);
return 0;
}
