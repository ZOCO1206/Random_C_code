#include <stdio.h>
int findMaximum(int, int); 
//prototype

void main(){
    int maxNumber = findMaximum(5, 7); 
    //calling a function
}

int findMaximum(int number1, int number2) { 
    //implementation
    int maximum = number2; 
    if (number1 > number2) maximum = number1; 
    return maximum; 
}
