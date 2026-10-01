/*
This program compares two strings given as input. 
It outputs the number of characters that match in each string position. 
Assume each input string has less than 50 characters.
*/

// Zia Anderson

#include <stdio.h>
#include <string.h>

int main(void) {
   char str1[50];
   char str2[50];
   int len;
   int i;
   int count = 0;
   
   printf("Enter string one: ");
   scanf("%s", str1); // Deleted '&' before str1 (#2)
   printf("Enter string two: ");
   scanf("%s", str2); 
   
   // Find the shortest length among the input strings
   if (strlen(str1) < strlen(str2)) { 
      len = strlen(str1);
   }
   else {
      len = strlen(str2);
   }
      
   for (i=0; i < len; ++i) { // Changed ',' to ';' (#1) Changed '>' to '<' (#3)
      if (str1[i] == str2[i]) { // Changed [1] to [i] (#4)
         count += 1; // Changed the increment from 2 to 1 (#5)
      }
   }
   
   if (count == 1) {
      printf("%d character matches\n", count);
   }
   else {
      printf("%d characters match\n", count);
   }

   return 0;
}