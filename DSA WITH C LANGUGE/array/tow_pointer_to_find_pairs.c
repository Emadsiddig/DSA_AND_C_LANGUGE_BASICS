#include<stdio.h>
#include<stdbool.h>

bool sumOFtwo(int arr[],int n,int target){
  int right =0,left =n-1,sum;

  while(left > right){
      sum =right+left;
        if(sum == target){
             return true;
           }
        else if(sum < target){
          left++;
        }
        else if(sum > target){
          right--;
         }
    }
  return false;
}
int main(){
    int arr[]={2,3,4,6,7,8,8,9};
    int target =4;
    int n =sizeof(arr) / sizeof(arr[0]);
    if (sumOFtwo){
        printf("true");
    }
    else {
        printf("false");
    }

return 0;
}