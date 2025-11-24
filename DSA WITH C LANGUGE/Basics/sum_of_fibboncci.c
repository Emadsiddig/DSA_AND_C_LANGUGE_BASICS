#include <stdio.h>


int main()
{
    int n,fi1=1,fi2=1,fi,sum=1;
    printf("enter the number of rebtichen you want :");
    scanf("%d",&n);
    printf("%d %d",fi1,fi2);
    for(int i=0;i<=n;i++){
        fi=fi1+fi2;
        sum+=fi;
        fi1=fi2;
        fi2=fi;
        printf("%d ",fi);
    }
  printf("\nthe sum =%d",sum);

    return 0;
}