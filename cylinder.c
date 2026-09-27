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
  printf("Enter the radius of the cylinder: ");
  scanf("%lf", &radius);

  // Getting the height
  printf("Enter the height of the cylinder: ");
  scanf("%lf", &height);

  // Calculating the volume
  volume = M_PI * pow(radius, 2) * height;
  // Calculating the area
  area = (2 * M_PI * radius * height) + (2 * M_PI * pow(radius, 2));

  // Ouput volume and area
  printf("Volume (cubic inches): %.2lf\n", volume);
  printf("Surface area (square inches): %.2lf\n", area);


  return 0;
  
}
