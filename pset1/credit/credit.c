#include<stdio.h>
#include<cs50.h>
#include<math.h>


long cc; // credit card input
bool luhns(void); //checksum algo 
bool mastercard(void); //check mastercard
bool amex(void); // check amex
bool visa(void); // check visa

int main(void){
    
    cc = get_long("Enter your credit card number: "); //get input 
    
    if(luhns() == 0 || (mastercard() == 0 && amex() == 0 && visa() == 0)){
        
        printf("INVALID\n");
        
    }
    
}



bool luhns(void){
    
    int sum = 0;
    int temp;
    int n;
    
    for(n=0; n<16;n++){
        temp = (int) fmod ((cc / pow(10,n)), 10);
        if(n % 2 == 0){          
            
            sum += temp; //n is even
        }else if(n % 2 != 0 && temp>=5){  
            
            sum += ((temp * 2) % 10) + 1; // n is odd and the place value is greater than or equal to 5
        }else{                          
            
            sum += temp * 2; // n is odd but the digit is less than 5
        }
        
    }
    
    if(sum % 10 == 0){
        
        return 1;
    }else{
        return 0;
    }
    
}
//Checks Mastercard
bool mastercard(void){
    
    int mc = (cc / pow(10, 14));
    
    if(mc == 51 || mc == 52 || mc == 53 || mc == 54 || mc == 55 ){
        
        printf("MASTERCARD\n");
        return 1;
    }
    else{
       
       return 0;
       
    }
}

//Checks Amex
bool amex(void){
    
    int ax = (cc / pow(10, 13));
    
    if(ax == 34 || ax == 37){
        printf("AMEX\n");
        return 1;
    }else{
        return 0;
    }
}

// Checks Visa
bool visa(void){
    
    int va = (cc / pow(10, 12)); //13 digits
    int va2 = (cc / pow(10, 15)); //16 digits
    
    if(va == 4 || va2 == 4){
        printf("VISA\n");
        return 1;
    }else{
        
        return 0;
    }
}
