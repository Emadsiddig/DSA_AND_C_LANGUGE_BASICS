#include<stdio.h>
int main(){
	int i;
	int a[4]={1,2,3,4};
    for(i=0;i<4;i++)
	printf("%d",a[i]);
	int b[4];
	for(i=0;i<4;i++){
	b[i]=a[i];
	}
	printf("\nthe b arry element ");
	for(i=0;i<4;i++)
	printf("\n%d",b[i]);
	return 0;
}
