#include<stdio.h>
#define max 100

int main() {
    int n, i, num, pos, a[max];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if(n >= max) {
        printf("Array size too large\n");
        return 1;
    }
    printf("Enter the elements:\n");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter the number to insert: ");
    scanf("%d", &num);
    printf("Enter the position (0 to %d): ", n);
    scanf("%d", &pos);
    if(pos < 0 || pos > n) {
        printf("Invalid position\n");
        return 1;
    }
    for(i=n;i>pos;i--) {
        a[i] = a[i-1];
    }
    a[pos] = num;
    n++;
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}