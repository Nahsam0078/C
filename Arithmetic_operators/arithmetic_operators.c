#include<stdio.h>

int main(){
    int x = 10;
    int y = 5;
    int z = 5;

    //z =x+y;
    //z = x - y; // Subtraction
    //z = x * y; // Multiplication
    //z = x / y; // Division
    //z = x % y; // Modulus
    z = x++; // Increment
    printf("z = %d, x after increment = %d\n", z, x); // Correct description
    return 0;
}