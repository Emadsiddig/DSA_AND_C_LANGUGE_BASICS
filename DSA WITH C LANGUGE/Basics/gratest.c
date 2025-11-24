#include <stdio.h>

int main(){
	
	int n,i,gr;
	printf("enter the number of variable in array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;++i){
		printf("enter the elemant index [%d] ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		 if(a[i]>a[i+1]){
	   	 i+=1;
	     }
	   else{
	    gr=a[i];
	   }
    	printf("%d\n",a[i]);
	}

	printf("the graetest =%d",gr);
	
	return 0;
}
