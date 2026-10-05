// Zia Anderson
// Chpt 4 PA

/* 
    This program will prompt the user to enter an integer amount between 2 to 15.
    Then, output a triangle of astrisks (*) with the user number being the top of the triangle.
*/

#include <stdio.h>

int main(void) {

    // Declaring integers
    int userNum;
    int i;
    int j;

    // Getting max number from user
    printf("Enter an integer between 2 and 15: ");
    scanf("%d", &userNum);

    // Checking if number is between 2 and 15
    while (userNum < 2 || userNum > 15) {
        printf("The number must be between 2 and 15, please try again: ");
        scanf("%d", &userNum);
    }
    
    // Outputting triangle of astrisks - increase
    for (i = 1; i <= userNum; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }
    
    // Outputting triangle of astrisks - decrease
    for (i = userNum - 1; i >= 1; --i) {
        for (j = 1; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;

}