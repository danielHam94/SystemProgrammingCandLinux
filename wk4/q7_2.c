//Sung Hoon Ham
//CSCI-C291
//Q7_2

//This program includes a struct called cat that is used to store information about a given cat
//The program should ask the user for information about their cat and initialize a cat structure with the given information
//The program should also print the information using a pointer to the initialized struct
//The information printed using the struct and the pointer should be the same

#include <stdio.h>
#include <string.h>

struct cat{
        char name[20]; // must input size of name to match below
        int age;
        float weight;
}; // added ; to end structure

int main(void){
        char n[20];
        int a;
        float w;
        struct cat c; // brought up to assign structure

	//Changed to assign input to correct memory address
        printf("What is your cat's name: ");
        scanf(" %s", c.name);

        printf("How old is your cat: ");
        scanf(" %d", &c.age);

        printf("How much does your cat weigh: ");
        scanf(" %f", &c.weight);

        struct cat *cPtr = &c; //pointer must be assigned to the memory address of c

	//Changed some syntax errors
        printf("Cat's name is %s, and should be the same as %s.\n", c.name, cPtr->name);
        printf("Cat's age is %d, and should be the same as %d.\n", c.age, cPtr->age);
        printf("Cat's weight is %f, and should be the same as %f.\n", c.weight, cPtr->weight);
}
