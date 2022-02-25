#include <stdio.h>
#include <stdlib.h>

int cycleLen(int n);

int main(void) {
    int number1, number2;
    int lenMax;

    while((scanf("%d %d", &number1, &number2) != EOF) && (number1 && number2)) {
        lenMax = 0;

        if(number1 > number2) {
            for(int i = number2; i <= number1; i++) {
                int lenTemp;
                lenTemp = cycleLen(i);
                if(lenTemp > lenMax) {
                    lenMax = lenTemp;
                }
            }
        } else if(number2 > number1) {
            for(int i = number1; i <= number2; i++) {
                int lenTemp;
                lenTemp = cycleLen(i);
                if(lenTemp > lenMax) {
                    lenMax = lenTemp;
                }            
            }
        }
        printf("%d %d %d\n", number1, number2, lenMax);
    }

    return 0;    
}

int cycleLen(int n) {
    int len = 1;

    while(n != 1) {
        if(n % 2) {
            n = n * 3 + 1;
        } else {
            n /= 2;
        }
        len ++;
    }

    return len;
}