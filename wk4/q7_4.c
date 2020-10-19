//Sung Hoon Ham
//CSCI-C291
//Q7_4

//This program is supposed to scan 5 ints from the user
//Using those 5 ints, it should construct a linked list of 5 elements
//Then it prints the elements of the list using the PrintList function

#include <stdio.h>
#include <stdlib.h> // add to use malloc function

struct Node{
        int data;
        struct Node *next; // must add struct 
};

// must move the printlist up
void PrintList(struct Node* n){
            while(n != NULL){
                printf("%d ", n->data); // n.data to n->data 
                n = n->next; // n.next to n->next
        }

        printf("\n");
}
    
int main(void){
    
    printf("Enter the numbers below:\n");
        //Nodes are made to avoid structed to avoid errors
        struct Node *first = NULL;
        struct Node *second = NULL;
        struct Node *third = NULL;
        struct Node *fourth = NULL;
        struct Node *fifth = NULL;
        
        first = (struct Node*) malloc(sizeof(struct Node));
        second = (struct Node*) malloc(sizeof(struct Node));
        third = (struct Node*) malloc(sizeof(struct Node));
        fourth = (struct Node*) malloc(sizeof(struct Node));
        fifth = (struct Node*) malloc(sizeof(struct Node));

        int i;

        //node needs to point to the data and link to the previous one when needed
        scanf(" %d", &i);
        first->data = i;

        scanf(" %d", &i);
        second->data = i;
        first->next = second;

        scanf(" %d", &i);
        third->data = i;
        second->next = third;

        scanf(" %d", &i);
        fourth->data = i;
        third->next = fourth;

        scanf(" %d", &i);
        fifth->data = i;
        fourth->next = fifth;
        fifth->next = NULL; // last node assigned to null
	printf("List is: ");
        PrintList(first);
}
