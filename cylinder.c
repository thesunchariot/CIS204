// Zia Anderson
// Chpt 2 PA

/* 
  This program will prompt the user to input a radius and a height.
  Then, it will output the volume and area of a cylinder.
*/

#include <math.h>
#include <stdio.h>

int main(void) {

  // Declaring variables
  double radius;
  double height;
  double area;
  double volume;

  // Getting the radius
  printf("Please enter the radius: ");
  scanf("%lf", &radius);

  // Getting the height
  printf("Please enter the height: ");
  scanf("%lf", &height);

  // Calculating the volume
  volume = M_PI * pow(radius, 2) * height;
  // Calculating the area
  area = (2 * M_PI * radius * height) + (2 * M_PI * pow(radius, 2));

  // Ouput volume and area
  printf("The volume of the cylinder is %.2lf cubic inches.\n", volume);
  printf("The area of the cylinder is: %.2lf square inches.\n", area);


  return 0;
  
}
