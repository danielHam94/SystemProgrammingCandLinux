//Sung Hoon Ham
//CSCI-C291
//Q7_3

//This program uses a function called CharacterScan to read a char from the user
//The function must take an int pointer as a parameter
//The program should print the char and ascii code for each character the user enters
//The program should only exit when the user enters escape

#include <stdio.h>

char CharacterScan(int *);

int main(void){
        while(1){
                //deleted aCode
                int iPtr;
                char c = CharacterScan(&iPtr); //char c goes to the addressof pointer
                
                //exit when you enter escape (27 is the ASCII number for esc key). 
                if(c == 27)
                        break;
                else
                        printf("%c is ASCII code %d.\n", c, iPtr);
        }
}

char CharacterScan(int *iPtr){ //add * in front of pointer
        char c;

        printf("Enter a character: ");
        scanf(" %c", &c);

        *iPtr = c; //dereferenced pointer directs to the character input
        return c;
}
