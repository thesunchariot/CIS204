// Zia Anderson

/*
This program removes the odd elements from an array.
The RemoveOdds() function has three parameters: the array size and two integer arrays. 
The function  fills the second array with the even elements of the first array and returns the number of elements in the second array.
*/
#include <stdio.h>

// Return the size of evenNumberArray - the number of even found
int RemoveOdds(int arraySize, int numberArray[], int evenNumberArray[]) {  // Changed void type to int type (#1)
   int i;               // for loop over numberArray                        // Declared evenNumberArray[] (#2)
   int count = 0;       // count the number of even

   for (i = 0; i < arraySize; i++) {
      if ((numberArray[i] % 2) == 0) {  // Changed 1 to 0 (#3)
         evenNumberArray[count++] = numberArray[i];
      }
   }

   return count;  // Changed to return count (#5)
}

int main(void) {

   int i;
   int input[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
   int result[20];
   int numberOfevens;

   numberOfevens = RemoveOdds(9, input, result);  // Added a ',' after input (#4)

   for (i = 0; i < numberOfevens - 1; i++) {
      printf("%d, ", result[i]);
   }
   printf("%d\n", result[i]);

   return 0;
}
