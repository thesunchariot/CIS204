// Zia Anderson
// Tuesday Lab
/*
  This program will prompt the user to input the length and width of a rectangle as integers.
  It will then calculate and display the perimeter and the area.
*/

#include <stdio.h>

int main(void) {
  // Declaration of variables
  int length;
  int width;
  int perimeter;
  int area;

  printf("Enter the length of the of the rectangle:\n"); // Getting length from user
  scanf("%d", &length);
  printf("Now enter the width:\n"); // Getting width from user
  scanf("%d", &width);

  printf("The perimeter of the rectangle is: %d\n", 2*(*length * *width)); // Calculating and displaying perimeter
  printf("The area of the rectangle is: %d\n", *length * *width); // Calculating and displaying area

}
