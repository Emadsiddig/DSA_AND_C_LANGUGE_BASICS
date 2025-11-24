#include<stdio.h>

int insATbeg(int arr[], int len){
    int value;
    printf("\nenter the number to insert at beg :");
    scanf("%d", &value);
    for(int i=len;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0] = value;
    len++;
    for(int i=0;i<len;i++){
        printf("\nthe array after insert is: %d", arr[i]);
    }
    return len;
}

int insATpos(int arr[], int len){
    int value, pos, i;
    printf("\nenter the number to insert at the position :");
    scanf("%d", &value);
    printf("\nenter the position to insert :");
    scanf("%d", &pos);
    len++;
    for(i = len;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    for(int i=0;i<len;i++){
        printf("\nthe array after insert is: %d", arr[i]);
    }
    return len;
}
int insATend(int arr[],int len){
    int value;
    printf("\nenter the value to insert at the end:");
    scanf("%d", &value);
    arr[len]=value;
    len++;
    for(int i=0;i<len;i++){
        printf("\nthe array after insert is: %d", arr[i]);
    }
    return len;
}

int main(){
    int i;
    int arr[10]={2,4,5};
    int len=3;
    for(i=0;i<len;i++){
        printf("\nthe array before insert is: %d", arr[i]);
    }
    // insert from beg 
   len = insATbeg(arr, len);
    // insert at position
   len = insATpos(arr, len);
    //insert at the end
   len = insATend(arr,len);
    return 0;
}