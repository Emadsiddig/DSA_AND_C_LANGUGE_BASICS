#include <stdio.h>
#include<math.h>
int main() {
    float weight, height, bmi;
    printf("Enter weight in kg: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);

    bmi = weight/(height*height);

    printf("Your BMI is: %f\n", bmi);

    if (bmi < 18.5) {
        printf("Underweight");
    }
    else if (bmi < 25) {
        printf("Normal");
    }
    else {
        printf("Overweight");
    }

    return 0;
}