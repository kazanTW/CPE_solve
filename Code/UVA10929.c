#include <stdio.h>

int isElevenMulti(unsigned long long int n);

int main(void) {
    unsigned long long int number;
    while(scanf("%llu", &number) && number) {
        int flag = isElevenMulti(number);
        if(flag == 1) {
            printf("%d is a multiple of 11.\n", number);
        } else {
            printf("%d is not a multiple of 11.\n", number);
        }
    }

    return 0;
}

int isElevenMulti(unsigned long long int n) {
    int flag = 0;
    if(n % 11 == 0) {
        flag = 1;
    } else {
        flag = 0;
    }

    return flag;
}