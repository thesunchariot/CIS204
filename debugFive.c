// Zia Anderson

#include <stdio.h>

// This program swaps the first and last numbers in an array that contains five integers. 

int main(void) {
   const int NUM_ELEMENTS = 5;
   int values[NUM_ELEMENTS];
   values[0] = 5; // Changed values[1] to values[0] (#3)
   values[1] = 10;
   values[2] = 15;
   values[3] = 20;
   values[4] = 25;
   int i;
   
   // Swap first and last values
   int temp;
   temp = values[0]; // Changed 1 to 0 (#4)
   values[0] = values[NUM_ELEMENTS - 1]; // Changed [NUM_ELEMENTS] to [NUM_ELEMENTS - 1] (#5)
   values[NUM_ELEMENTS - 1] = temp;
   
   // Output updated list
   printf("The updated array is: "); // Got rid of \n in front of print statement (?)
   for (i = 0; i < NUM_ELEMENTS; ++i) { // Changed '<=' to '<' (#1) Added ';' before ++i (#2)
      printf("%d ", values[i]);
   }
   printf("\n");

   return 0;
}