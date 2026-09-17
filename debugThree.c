// The program will display the number of digits in an integer between 0 - 9999

#include <stdio.h>

int main(void) {
   int num;
   
   printf("Enter an integer between 0 - 9999: "); // Added '(' after printf #1
   scanf("%d", &num);
      
   if (num > 999) { // Deleted ';' before (num > 999) #2
      printf("%d has 4 digits\n", num);
   } else if (num > 99) { // Changed '<' to '>' #4
      printf("%d has 3 digits\n", num);
   } else if (num > 9) { // Changed 10 to 9 #5 
      printf("%d has 2 digits\n", num);
   } // Added '}' to finish prior else if statement #3
    else {
      printf("%d has 1 digit\n", num);
   }

   return 0;
}
