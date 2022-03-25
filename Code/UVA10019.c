#include <stdio.h>

int binParity(unsigned long long int binary);
unsigned long long int decToBin(int n);
unsigned long long int hexToBin(int hex);

int main(void) {
    int T;
    int N;
    scanf("%d", &T);
    for(int i = 0; i < T; i++) {
        scanf("%d", &N);
        printf("%d %d\n", binParity(decToBin(N)), binParity(hexToBin(N)));
    }

    return 0;
}

unsigned long long int decToBin(int n) {
    unsigned long long int binary = 0;
    int reminder;
    unsigned long int i = 1;
    while(n != 0) {
        reminder = n % 2;
        binary += reminder * i;
        n /= 2;
        i *= 10;
    }

    return binary;
}

unsigned long long int hexToBin(int n) {
    unsigned long long int binary = 0;
    unsigned long int i = 1;
    int bytecode;
    while(n != 0) {
        bytecode = decToBin(n % 10);
        binary += bytecode * i;
        n /= 10;
        i *= 10000;
    }

    return binary;

}

int binParity(unsigned long long int binary) {
    int parity = 0;
    while(binary > 0) {
        if(binary % 10) {
            parity++;
        }
        binary /= 10;
    }

    return parity;
}