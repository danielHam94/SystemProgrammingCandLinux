//Sung Hoon Ham
//September 10,2019
//Number 2C(switch-case)

#include <stdio.h>

//currency converter formulas
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

    //input for scan f
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
    
    
    switch(input){
        //receive input for dollars and convert to currencies
        case 'E':
        printf("Enter the dollar amount.\n");
        scanf("%d", &money);
        printf("The converted amount is %d in euros.\n", euro(money));
        break;
        
        case 'e':
        printf("Enter the dollar amount.\n");
        scanf("%d", &money);
        printf("The converted amount is %d in euros.\n", euro(money));
        break;
        
        case 'P':
        printf("Enter the dollar amount.\n");
        scanf("%d", &money);
        printf("The converted amount is %d in pounds.\n", pounds(money));
        break;
        
        case 'p':
        printf("Enter the dollar amount.\n");
        scanf("%d", &money);
        printf("The converted amount is %d in pounds.\n", pounds(money));
        break;
        
        case 'A':
        printf("Enter the dollar amount.\n");
        scanf("%d", &money);
        printf("The converted amount is %d in Australian dollars.\n", ausDollars(money));
        break;
        
        case 'a':
        printf("Enter the dollar amount.\n");
        scanf("%d", &money);
        printf("The converted amount is %d in Australian dollars.\n", ausDollars(money));
        break;
        
        case 'R':
        printf("Enter the dollar amount.\n");
        scanf("%d", &money);
        printf("The converted amount is %d in renminbi.\n", renminbi(money));
        break;
        
        case 'r':
        printf("Enter the dollar amount.\n");
        scanf("%d", &money);
        printf("The converted amount is %d in renminbi.\n", renminbi(money));
        break;
        
        case 'L':
        printf("Enter the dollar amount.\n");
        scanf("%d", &money);
        printf("The converted amount is %d in lira.\n", lira(money));
        break;
        
        case 'l':
        printf("Enter the dollar amount.\n");
        scanf("%d", &money);
        printf("The converted amount is %d in lira.\n", lira(money));
        break;
        
        case 'W':
        printf("Enter the dollar amount.\n");
        scanf("%d", &money);
        printf("The converted amount is %d in won.\n", won(money));
        break;
        
        case 'w':
        printf("Enter the dollar amount.\n");
        scanf("%d", &money);
        printf("The converted amount is %d in won.\n", won(money));
        break;
        
        case 'Y':
        printf("Enter the dollar amount.\n");
        scanf("%d", &money);
        printf("The converted amount is %d in yen.\n", yen(money));
        break;
        
        case 'y':
        printf("Enter the dollar amount.\n");
        scanf("%d", &money);
        printf("The converted amount is %d in yen.\n", yen(money));
        break;
        
        case '#':
        printf("Enter the dollar amount.\n");
        scanf("%d", &money);
        printf("The converted amount is %d in euros.\n", euro(money));
        printf("The converted amount is %d in pounds.\n", pounds(money));
        printf("The converted amount is %d in Australian dollars.\n", ausDollars(money));
        printf("The converted amount is %d in renminbi.\n", renminbi(money));
        printf("The converted amount is %d in lira.\n", lira(money));
        printf("The converted amount is %d in won.\n", won(money));
        printf("The converted amount is %d in yen.\n", yen(money));
        break;
    
    //quit program    
    case 'Q':
        return 0;
        break;
        printf("Quitting the program.\n");
    case 'q':
        return 0;
        break;
        printf("Quitting the program.\n");
        
    //Invalid input    
    default:
        printf("Invalid input.\n");
        break;
    }
}
    return 0;
}
