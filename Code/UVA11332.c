#include <stdio.h>

int summing(int n) {
    int temp = 0;
    while(n != 0) {
        temp += (n % 10);
        n /= 10;
    }
    if(temp < 10) {
        return temp;
    } else {
        summing(temp);
    }
}

int main(void) {
    int number;
    while(scanf("%d", &number) && number) {
        printf("%d\n", summing(number));
    }

    return 0;
}