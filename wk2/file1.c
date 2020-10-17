/*Debugging quiz - File No: 1 */
/* using a for loop, print all the characters from A-Z*/
/* Print the sum of all even numbers from 2 to 100 */
/* Correct the logical errors in the program */

#include<stdio.h>
int main (void){
  char alphabet;
  int limit = 100, sum = 0, counter;
  printf("The list of alphabets from A to Z are: \n");
  for(alphabet = 'A'; alphabet <= 'Z'; alphabet++){
    printf("%c\n", alphabet);
  }
  printf("The limit is %d\n", limit);
  for(counter = 2; counter < limit; counter = counter + 2){
    sum += counter;
  }
    printf("Sum = %d\n", sum);
    return (0);
}
