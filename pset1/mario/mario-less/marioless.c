#include <stdio.h>
#include <cs50.h>

//EASY MARIO PROBLEM
//YOURE A FUCKING IDIOT!!!!!!!!!!!!!!!!!! 
//You cheated for this assignment remember that. Youre fucking pathetic. 

int main(void){
    
    int height;//height
    int row;//row
    int spaces = 0; //spaces
    int blocks; //blocks
    do{
    
    height = get_int("Height: ");
    
    }while(height < 1 || height > 8);
    
    //This prints the lines
    for(row=0; row<height; row++ ){
        
        //prints the spaces
         for(spaces=height-row;spaces>1;spaces--){
                   
            printf(" ");
            
         }
        //prints blocks
        for(blocks = 0; blocks<=row; blocks++){
           
                
                printf("#");
           }
           
          
        
           
        printf("\n");
    }
       
       
       
    
    
    
}