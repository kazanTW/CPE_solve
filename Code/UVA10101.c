#include <stdio.h>

void bangla(unsigned long long int n);

int main(void) {
    unsigned long long int number;
    int index = 1;
    while(scanf("%llu", &number) != EOF) {
        printf("%4d. ", index);
        if(number == 0) {
            printf("%d", number);
        } else {
            bangla(number);
        }
        printf("\n");
        index++;
    }

    return 0;
}

void bangla(unsigned long long int n) {
    if(n / 10000000) {
        bangla(n / 10000000);
        printf(" kuti");

        n %= 10000000;
        if(n > 0) {
            printf(" ");
        }
    }
    if(n / 100000) {
        printf("%lld lakh", n / 100000);
        n %= 100000;
        if(n > 0) {
            printf(" ");
        }        
    }
    if(n / 1000) {
        printf("%llu hajar", n / 1000);
        n %= 1000;
        if(n > 0) {
            printf(" ");
        }
    }
    if(n / 100) {
        printf("%llu shata", n / 100);
        n %= 100;
        if(n > 0) {
            printf(" ");
        }
    }
    if(n != 0) {
        printf("%llu", n);
    }
}