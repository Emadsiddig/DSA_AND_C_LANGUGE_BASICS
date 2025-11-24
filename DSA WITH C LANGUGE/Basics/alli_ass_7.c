#include<stdio.h>
int main(){
	int i;
	int a[5]={1,2,3,4,5};
    for(i=0;i<5;i++){
	}
	int b[5]={14,20,13,44,35};
	for(i=0;i<4;i++){	
	}
	int c[10];
	for(i=0;i<5;i++){
	 c[i]=a[i];
	}
	for(i=5;i<10;i++){
		c[i]=b[i-5];
	}
  for(i=0;i<10;i++){
  	printf("%d\n",c[i]);
  }
	return 0;
}
