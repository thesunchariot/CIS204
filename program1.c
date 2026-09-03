// Zia Anderson
// Thursday Lab Program1

/*
    This program will prompt the user to enter and amount of change in pennies.
    Then, it will output the cents into dollars, quarters, dimes, nickels, and the rest of the pennies.
*/

#include <stdio.h>
#include <math.h>

int main(void) {

    // Declaring variables
    int totalPennies;
    int dollars;
    int quarters;
    int dimes;
    int nickels;
    int pennies;

    // Getting the total change
    printf("Enter the total amount of change in pennies: ");
    scanf("%d", &totalPennies);

    // Calculating change
    dollars = totalPennies / 100;
    pennies = totalPennies % 100;

    quarters = pennies / 25;
    pennies = pennies % 25;

    dimes = pennies / 10;
    pennies = pennies % 10;

    nickels = pennies / 5;
    pennies = pennies % 5;

    // Outputting change to user
    printf("Your change is %d dollar(s), ", dollars);
    printf("%d quarter(s), ", quarters);
    printf("%d dime(s), ", dimes);
    printf("%d nickel(s), ", nickels);
    printf("and %d pennies.\n", pennies);

    return 0;

}