// Zia Anderson
// Chpt 3 PA

/* 
    This program will prompt the user for their weight in pounds & height in inches.
    It will then calculate their BMI and output whether it's interpretation.
*/

#include <stdio.h>
#include <math.h>

int main(void) {

    // Declaring variables
    double weight;
    double height;
    double bmi;

    // Getting info from user
    printf("Enter weight in pounds: ");
    scanf("%lf", &weight);

    printf("Enter height in inches: ");
    scanf("%lf", &height);

    // Calculating BMI & output
    bmi = ((weight / (pow(height, 2.0))) * 703.0);
    printf("BMI is %.1lf\n", bmi);

    // Interpreting & output
    if (bmi < 18.5) {
        printf("Underweight\n");
    } else if ((bmi >= 18.5) && (bmi < 25.0)) {
        printf("Normal\n");
    } else if ((bmi >= 25.0) && (bmi < 30.0)) {
        printf("Overweight\n");
    } else if (bmi >= 30.0) {
        printf("Obese\n");
    }

    return 0;

}
