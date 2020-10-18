//Sung Hoon Ham
//September 13, 2019
//quiz3.c

#include<stdio.h>
void printGrade(int score){
        //print the students grade based on their score in the class
    if(score >= 97 && score <= 100){
        printf("Your grade is : A+\n");
    } else if(score >= 90 && score < 97){
        printf("Your grade is : A\n");
    } else if(score >= 80 && score < 90){
        printf("Your grade is : B\n");
    } else if(score >= 70 && score < 80){
        printf("Your grade is : C\n");
    } else if(score >= 0 && score <70){
        printf("Your grade is : F\n");
    } else{
        printf("Invalid\n");
    }
}
int main(void){
	//create variables
        char ch;
        float score;
        int assignments;
        float sum;
        do {
                //get the number of assignments from the student
                printf("How many assignments did you have ? ");
                scanf("%i",&assignments);
                int counter = 1;
                //get the student's score and the max score for each assignment
                printf("Enter your score for all assignments : \n" );
                while(counter < assignments + 1){
                scanf("%f", &score);
                printGrade(score);
                sum += score;
                counter++;
                }
                //calculate the student's percentage in the class using the information you've gathered.
                float percent;
                percent = sum/assignments;
                
                printf("Your average is %f percent\n",percent);
                printGrade(percent);
                //Enter Y to continue and N to terminate
                printf(" \n Do you want to continue? (Y/N) ");
                scanf(" %c",&ch);
                //Reset sum value to 0 for each run
                sum = 0;
        } while(ch == 'y'|| ch == 'Y');
}
