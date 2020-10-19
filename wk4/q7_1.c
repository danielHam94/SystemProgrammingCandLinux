//Sung Hoon Ham
//CSCI-C291
//Q7_1

//This program should read a string from the user and print it using a character pointer
//The program is setup to use pointer offset notation to get each character of the string

#include <stdio.h>
#include <string.h>

int main(void){
        char s[20]; // added string size to 20
        printf("Enter a string input: ");
        scanf(" %s", s); // changed character to string
        printf("String input in pointer offset notation: ");

        char *cPtr = s; //pointer directs to string

        int i=0;
	//while must be changed to *cPtr to avoid infinite looping
	//loops till end of string
        while(*cPtr){
                printf("%c", *cPtr++);
        }

        printf("\n");
}
