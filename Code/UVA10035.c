#include <stdio.h>

void carryCount(int n1, int n2);

int main(void) {
    int num1, num2;

    while(scanf("%d %d", &num1, &num2) && (num1 || num2)) {
        carryCount(num1, num2);
    }

    return 0;
}

void carryCount(int n1, int n2) {
    int count = 0;
    int temp = 0;

    while(n1 || n2) {
        if(((n1 % 10) + (n2 % 10) + temp) >= 10) {
            count++;
            temp = 1;
        } else {
            temp = 0;
        }
        n1 /= 10;
        n2 /= 10;
    }

    if(count == 0) {
        printf("%s\n", "No carry operation.");
    } else if(count == 1) {
        printf("%s\n", "1 carry operation.");
    } else {
        printf("%d%s\n", count, " carry operations.");
    }
}