#include<stdio.h>
#include<math.h>
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*fact(n-1);
}

float sin_sum(float x,int n){
    int i;
    float count=0.0;
    for(i=1;i<=n;i++){
        count=count+pow(-1,i-1)*pow(x,2*i-1)/fact(2*i-1);
    }
    return count;
}
int main(){
    float x,count;
    int n;
    printf("enter the value of x and n");
    scanf("%f %d",&x,&n);
    count=sin_sum(x,n);
    printf("the sin series is:%f",count);
    return 0;
}
