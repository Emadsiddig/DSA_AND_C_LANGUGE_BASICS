#include<stdio.h>
#define max 100 
int main() {
    int n,i,num,a[max];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    if(n >=max) {
        printf("Array size too large\n");
        return 1;
     }
    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to insert at end: ");
    scanf("%d", &num);
    a[n] = num;
    n++;
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}