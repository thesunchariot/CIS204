// Zia Anderson
// Chpt 6 PA

/*
    This program will prompt the user to input an amount of integers to be entered, 
    then enter each integer.
    Then, it will prompt the user to enter a threshold amount as an integer and list the integers entered
    that are below or equal to that threshold.
*/

#include <stdio.h>

// Function to get values and assign to userValues
void GetUserValues(int userValues[], int numValues) {
    // Declaring variables
    int i;
    int j = 1;

    // Getting user values
    for (i = 0; i < numValues; ++i) {
        printf("Enter number %d: ", j);
        scanf("%d", &userValues[i]);
        j++;
    }

}

// Reads all values in userValues[], stores and returns all values <= to threshold
int IntsLessThanOrEqualToThreshold(int userValues[], int maxValues, int numValues, int resValues[]) {
    // Declaring variables
    int thresholdCount = 0;
    int i;
    int j = 0;

    for (i = 0; i < numValues; ++i) {
        if (userValues[i] <= maxValues) {
            resValues[j] = userValues[i];
            j++;
            thresholdCount++;
        }
    }

    return thresholdCount;

}

int main(void) {
    // Declaring variables
    int i;
    int numValues;
    int userValues[20];
    int thresValues[20];
    int thresholdVal;
    int thresholdCount;

    // Prompting user for values
    printf("Enter the number of integers that follow: ");
    scanf("%d", &numValues);
    GetUserValues(userValues, numValues);

    // Prompting user for threshold & calculating
    printf("Enter the threshold value: ");
    scanf("%d", &thresholdVal);
    thresholdCount = IntsLessThanOrEqualToThreshold(userValues, thresholdVal, numValues, thresValues);

    // Outputting
    printf("Values below the threshold of %d: ", thresholdVal);
    for (i = 0; i < thresholdCount; ++i) {
        printf("%d ", thresValues[i]);
    }
    printf("\n");

}