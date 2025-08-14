#include <stdio.h>
//int is the return type of main fumction
int main() {
    // variables - data type which can store data in the memory
int amount;
printf ("Enter amount");
scanf ("%d", & amount) //& means address of the variables
//assigment "="
float tax = (30.0/100*amount) + amount; 
printf("amount with added tax: %f", tax);
}