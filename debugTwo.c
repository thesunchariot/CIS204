#include <math.h>
#include <stdio.h> // Added #include to be able to use scanf function #3

int main(void) {
   double a;
   double b;
   double c; // Changed from int to double #1
   double s;
   double area;

   scanf("%lf %lf %lf", &a, &b, &c);

   s = (a + b + c) / 2.0; // Half-perimeter 		// Added perenthesis to a + b + c and changed 2 to 2.0 #5
   area = sqrt(s * (s-a) * (s-b) * (s-c)); // Added semicolon at the end #2

   printf("Triangle area = %0.2lf\n", area); // Added comma after " #4 

   return 0;

}
