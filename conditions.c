/*
algorithn - steps to solve a problem

ask for user inputs
-first_num
-second_num
-operation
if no valid operation then throw errow

if opertion == 1 => perform addition of frist_num and second_num
if opertion == 2 => perform subtraction of frist_num and second_num
if opertion == 3 => perform mul of frist_num and second_num
if opertion == 4 => div of frist_num and 
*/
#include <stdio.h>
// Standard input ooutput header file included
// return type is int
int main() {
// variables declare
float frist_num, second_num; // two floating point numbers for calculation
int operation; // to store user choice of operation (1,2,3,4)
// input section
print("Please input frist name:");
scanf("%f" , & frist_num); // read frist float number from user
print("Please input second name:");
scanf("%f" , & second_num); // read second float number from user
print("Enter operation:");
scanf("%d" , & opertion); // read which operation user wants
// and -> all conditions should be true
// or -> at least one condition should be true
if (operation !=1 && operation !=2 && operation != 3 && operation !=4) {
   printf("Invalid operation!"); // if user enters other than 1-4
    return 
     0; // program exits
}
// \n -> new line
// \t -> tab
// check which operation user selected 
if (operation == 1) {
    printf("Result of addition: %f\n", frist_num + second_num);
}
if (operation == 2) {
    printf("Result of sub: %f\n", frist_num + second_num);
}
if (operation == 3) {
    printf("Result of mul: %f\n", frist_num + second_num);
}
if (operation == 4) {
    // %d is for integer
    // here we use %f because division result can be float
    printf("Result of dev: %f\n", first_num / second_num);
}
}