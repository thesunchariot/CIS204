// Zia Anderson
// Chpt 5 PA

/*
    This program will prompt the user to input an amount of decimal numbers as a whole number, 
    then get the decimal numbers from the user.
    It will then display the list of decimal numbers normalized. 
*/

#include <stdio.h>

int main(void) {

    // Declaring array
    double valueSet[20];
    // Declaring variables
    double largestValue;
    int USER_NUM;
    int i;

    // Getting userNum
    printf("Enter the number of values that will follow: ");
    scanf("%d", &USER_NUM);

    // Getting valueSet
    for (i = 0; i < USER_NUM; ++i) {
        printf("Enter double number %d: ", (i + 1));
        scanf("%lf", &valueSet[i]);
    }
    printf("\n");

    /*
        Normalizing doubles
    */

    // Getting largest value
    largestValue = valueSet[0];
    for (i = 1; i < USER_NUM; ++i) {
        if (valueSet[i] > largestValue) {
            largestValue = valueSet[i];
        }
    }

    // Calculating
    for (i = 0; i < USER_NUM; ++i) {
        valueSet[i] = (valueSet[i] / largestValue);
    }

    // Outputting normalized values
    printf("The list of doubles normalized\n");
    for (i = 0; i < USER_NUM; ++i) {
        printf("%.2lf ", valueSet[i]);
    }

    printf("\n");

    return 0;

}