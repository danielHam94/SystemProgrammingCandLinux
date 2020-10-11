/* 
 * Basic C program to print out hello world! 
 * Author: Adeel Bhutta
*/

#include <stdio.h>
#include <unistd.h>

int main() {
int i;
    printf("\"{Hello! Welcome to a Beautiful Fall @ IU!}, /\\ This is Fall 2019's 1st 8 Week Course\"\n");
    while (1){
    printf("Sung Hoon Ham");
    for(i = 0; i < 5; i++)
   {
    printf(".");
    fflush(stdout);
    sleep(1);}
    sleep(25);
    printf("\n"); }

 // printf("Sung Hoon Ham\n");
 // printf("Hello: Welcome to C291!\n");
 // printf("Please enter a number and press ENTER: ");
 // scanf("%d", &myNumber);  
 // printf("Here is the number yor entered: %d\n",myNumber);
  return(0); 
}


