#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void){
    
    float input;
    int cents;
    int counter;
    int coins = 0;
    
    
    // First part get user input
    do{
        
        input = get_float("Amount: ");
        //to convert numbers to cents
        cents = round(100 * input);
    }while(input < 0);
    
    
    while(cents >= 25){
        
        cents = cents - 25;
        coins++;
    }while(cents >= 10){
        cents = cents-10;
        coins++;
        
        
    }while(cents >= 5){
        cents = cents - 5;
        coins++;
        
    }while(cents >= 1){
        cents = cents - 1;
        coins++;
    } 
        
    printf("Total Coins %i \n", coins);
   
    
    
}



