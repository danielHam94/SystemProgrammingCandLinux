//Sung Hoon Ham
//September 13, 2019
//dbPractice2.c

// Program to read integers into a 3X3 matrix and display them

#include <stdio.h>
void display(int Matrix[][3]);

int main(void) {
	//Create a 3x3 matrix and receive 9 input values with it
        int Matrix[3][3];
        printf("Enter 9 elements of the matrix:\n");
	int i;
	int j;
        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                scanf("%d", &Matrix[i][j]);
            }
        }
        display(Matrix);
        return 0;
}

//show the matrix value
void display(int Matrix[][3]) {
	int i;
	int j;
        for(i = 0; i < 3; i++) {
                for(j = 0; j < 3; j++){
			//if-else statement to print commas between numbers
                        if (j == 2){
                            printf("%d", Matrix[i][j]);
                        } else {
                            printf("%d, ", Matrix[i][j]);
                        }
                }    
                printf("\n");
        }
}
