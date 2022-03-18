#include <stdio.h>

void recPrint(int n, int s);           // Declare the function at first

int main(void) {
    int number;             
    scanf("%d", &number);       // Get the number
    recPrint(number, 1);        // Print numbers by calling funcion
    printf("\n");               // Print a \n to avoid output sticking to the next command line

    return 0;
}

void recPrint(int n, int s) {           // Define function
    if(n == s) {                        // If n = s, just print s and end
        printf("%d", s);
    } else {                            // If not, print s and use (n + 1) to call function
        printf("%d", s);
        recPrint(n, s + 1);
    }
}