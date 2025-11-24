#include <stdio.h>

struct student {
    char name[20];
    int number,age;
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
	struct student arr[30];
	int n,i;
	printf("enter the number of student :");
	scanf("%d",&n);
	 for(i=0;i<n;i++){
	 	printf("enter the student %d",i+1);
	   InputStudent(&arr[i]);
	 }
     for(i=0;i<n;i++){
	 displayStudent(arr[i]);
    }
   
    return 0;
}
