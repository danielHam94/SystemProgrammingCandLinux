//Sung Hoon Ham
//September 10,2019
//Number 2(A,B, if-else)

#include <stdio.h>

//currency formulas
int euro(int d){ 
    return(0.91 * d);
}

int pounds(int d){
    return(0.81 * d);
}

int ausDollars(int d){
    return(1.46 * d);
}

int renminbi(int d){
    return(7.11 * d);
}

int lira(int d){
    return(5.77 * d);
}

int won(int d){
    return(1191.5 * d);
}

int yen(int d){
    return(107.5 * d);
}

int main(void)
{  
    //variables 
    char input;
    int money;

printf("Welcome to the currency converter\n---------------------------------\n");

    //Scan for currency input
    while(1){
    printf("Enter E to convert $ to Euros.\n");
    printf("Enter P to convert $ to Pounds.\n");
    printf("Enter A to convert $ to Australian Dollars.\n");
    printf("Enter R to convert $ to Renminbi.\n");
    printf("Enter L to convert $ to Lira.\n");
    printf("Enter W to convert $ to Won.\n");
    printf("Enter Y to convert $ to Yen.\n");
    printf("Enter # to convert $ to all currencies.\n");
    printf("Enter Q to quit.\n");
    scanf(" %c", &input);

//quit program
if (input =='Q' || input == 'q'){
        return(0);
        printf("Quitting the program.\n");}
    
//Receive dollar input    
printf("Enter the dollar amount.\n");
scanf("%d", &money);

    
//if else statement to convert money
if (money >= 1 && money <= 1000){
    if (input == 'E' || input == 'e'){
        printf("The converted amount is %d in euros.\n", euro(money));
    } else if (input == 'P' || input == 'p'){
        printf("The converted amount is %d in pounds.\n", pounds(money));
    } else if (input =='A' || input == 'a'){
        printf("The converted amount is %d in Australian dollars.\n", ausDollars(money));
    } else if (input =='R' || input == 'r'){
        printf("The converted amount is %d in renminbi.\n", renminbi(money));
    } else if (input =='L' || input == 'l'){
        printf("The converted amount is %d in lira.\n", lira(money));
    } else if (input =='W' || input == 'w'){
        printf("The converted amount is %d in won.\n", won(money));
    } else if (input =='Y' || input == 'y'){
        printf("The converted amount is %d in yen.\n", yen(money));
    } else if (input =='#'){
        printf("The converted amount is %d in euros.\n", euro(money));
        printf("The converted amount is %d in pounds.\n", pounds(money));
        printf("The converted amount is %d in Australian dollars.\n", ausDollars(money));
        printf("The converted amount is %d in renminbi.\n", renminbi(money));
        printf("The converted amount is %d in lira.\n", lira(money));
        printf("The converted amount is %d in won.\n", won(money));
        printf("The converted amount is %d in yen.\n", yen(money));
    } else {
        printf("Invalid input.\n");
    }
} else {
    printf("Invalid dollar amount.\n");
}
}
    return 0;
}
