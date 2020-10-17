//Sung Hoon Ham
//September 10,2019
//Number 1


#include <stdio.h>

int main(void)
{   
    //variables
    char input;
    int peopleInside = 5;
    int groupNum;
    int counter = 0;

//opening statement
printf("Welcome to the Fields Museum\n----------------------------\n");

//while loop with counter set to 2, to automatically stop running after capacity reaches above 149 twice
while(counter < 2){
    printf("Enter the number of people in group entering or leaving:\n(positive = enter, negative = leave)\n");
    scanf("%d", &groupNum);
    peopleInside = peopleInside + groupNum;
    
    //if-else statements to print correct number and statements according to capacity
    if (peopleInside >= 149){
        peopleInside = 149;
        counter ++;
        printf("The room is full. We can only accept a few members to reach the limit of 149 people.\n");
        printf("There are currently %d people inside.\n",peopleInside);
    }
    
    else if(peopleInside<5){
        peopleInside = 5;
        printf("There has to be 5 security guards inside at all times.\n");
        printf("There are currently %d people inside.\n",peopleInside);
    }
    else{
        printf("There are currently %d people inside.\n",peopleInside);
    }
    
}
//closing statement
printf("----------------------------\nPlease come back again.\n");
}
