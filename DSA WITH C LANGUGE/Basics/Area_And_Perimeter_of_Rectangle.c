#include<stdio.h>
int main(){
  int len;
  printf("enter the lenght of rectangle: ");
  scanf("%d",&len);
  int bre;
  printf("enter the breadth  of rectangle: ");
  scanf("%d",&bre);
  int area=len*bre;
  int pre=2*(len+bre);
  printf("the area =%d\n",area);
  printf("the Perimeter =%d\n",pre);

    return 0;
}