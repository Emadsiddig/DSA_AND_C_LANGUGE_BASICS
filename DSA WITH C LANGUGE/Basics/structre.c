#include <stdio.h>
struct student {
    char name[20];
    int age,number;
    float marks;
};
void InputStudent(struct student *s) {
    printf("Enter name: ");
    scanf("%s", (*s).name);
    printf("Enter number: ");
    scanf("%d", &(*s).number);
     printf("Enter age: ");
    scanf("%d", &(*s).age);
    printf("Enter marks: ");
    scanf("%f", &(*s).marks);
}
void displayStudent(struct student s){
	 printf("Name: %s\n", s.name);
    printf("Number: %d\n", s.number);
    printf("Number: %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);
}
int main() {
    int n;
	printf("enter the number of student :");
	scanf("%d",&n);
	struct student arr[n];
    int *p=&arr[0];
	 for(int i=0;i<n;i++){
	 	printf("enter the student %d",i+1);
	   InputStudent(p+i);
	 }
     for(int i=0;i<n;i++){
	 displayStudent(arr[i]);
    }
    return 0;
}