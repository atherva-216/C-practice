Program: Two Sum Finder
   Date: October 2025
   Author: Atherva Mishra
   Description:
      Finds two indices in an array whose elements add up to a target sum.
      Example:
          Input: [12, 35, 89, 65, 67, 99], target = 154
          Output: Indices 2 and 3 (89 + 65 = 154)

#include<stdio.h>
int main(){
    int i,j,sum;
    int nums[]={12,35,89,65,67,99};
    int target=154;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            sum=nums[i]+nums[j];
            if(sum==target&&i<j){
                printf("the value of indices is %d and %d",i,j);
                break;
            }
        }
    }
    return 0;
}
