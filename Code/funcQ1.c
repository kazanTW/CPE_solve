#include <stdio.h>

int sum(int n, int m);         // Declare the function at first

int main(void) {
    int num1, num2;                  
    scanf("%d %d", &num1, &num2);       // Get the two number
    int total = sum(num1, num2);        // Get the sum of numbers by function
    printf("%d\n", total);              // Print the sum
    return 0;
}

int sum(int n, int m) {        // Define the function
    return (n + m);            // Return the sum of two number
}