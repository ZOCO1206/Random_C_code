#include<stdio.h>
// Function Defination 
int getAreaOfSquare(int side){
// local variable declaration 
int area;
area = side*side;
// Return statement 
return area;
}
int main(){
int side, area;
printf("Enter side of square\n");
scanf("%d", &side);
// Calling getAreaOfSquare function
area = getAreaOfSquare(side);
printf("Area of Square = %d", area);
return 0;
}