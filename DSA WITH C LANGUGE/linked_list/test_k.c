#include<stdio.h>


int main(){
char name,fav1,fav2,fav3;
int age,mark1,mark2,mark3,total,avarege;
printf("enter your name:");
scanf("%s",&name);

printf("\nenter fav1:");
scanf("%s",&fav1);

printf("\nenter fav2:");
scanf("%s",&fav2);

printf("\nenter fav3:");
scanf("%s",&fav3);

printf("enter the mark1:");
scanf("%d",&mark1);

printf("enter the mark2:");
scanf("%d",&mark2);

printf("enter the mark3:");
scanf("%d",&mark3);
total=mark1+mark2+mark3;
avarege=total/3;
printf("the total :%d and the averegegg :%d",total,avarege);



	return 0;
}