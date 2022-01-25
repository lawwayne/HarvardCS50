#include <stdio.h>
#include <cs50.h>

int main(void){
    
    
    int height, row, blocks;
    int spaces = 0;
    
        do{
        
        height = get_int("Height: ");
        
        }while(height < 1 || height > 8);
        
        //This prints the lines
        for(row=0; row<height; row++ ){
            
            //lines 16-31 Ascending Pyramid
            //prints the spaces
             for(spaces=height-row;spaces>1;spaces--){
                       
                printf(" ");
                
             }
            //prints blocks
            for(blocks = 0; blocks<=row; blocks++){
               
                    
                    printf("#");
               }
               
               //loop for spaces here 
               do{
                   
                   printf("  ");
               }while(height < 1 || height > 8);
               
               //prints descending
               for(blocks=0; blocks<=row; blocks++){
                   
                   printf("#");
               }
               
              printf("\n");
        }


    
    
    
}

