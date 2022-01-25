# Credit 

- [x] First prompt the user.

- [ ] See if the Luhns algorithms works for the input
    - [ ] Create Luhn's Algorithm

- [ ] If luhns algo works then check to see if initial input meets the requirements for each card type

- MasterCard - length 16 and begins with 51, 52, 53, 54, 55

    -Amex - length 15 and begins with 34 or 37

        - Visa - length 13 and 16 and begins with 4
        
        
## Problems

I do not know how to put the length of the string should be 13 <= lenght <= 16

After getting the input using % 10 will take the last digit. However I need to find a way where it stores each digit everytime it runs the function

For example 

4003600000000014 % 10 = 4

I have to store the 4 and then print the new number which is 400360000000001

## Solution 

A  solution for meeting requirements. 
     
     Whatever the input is if I divide by 10^14, 10^13, 10^12 should give me the first two digits. 
     
     I can do a if else statemnt if input / (10^14, 10^13, 10^12) = (requirements) then printf company
     
     Create a helper function for each individual company?