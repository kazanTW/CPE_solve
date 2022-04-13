#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int decToHex(int n);
int hexToDec(int n);

int main(void) {
    char number[15];
    int output;
    while(scanf("%s", number) && (number[0] != '-')) {
        if(strlen(number) > 2 && (number[1] == 'x' || number[1] == 'X')) {
            sscanf(number, "%x", &output);
            printf("%d\n", output);
        } else {
            sscanf(number, "%d", &output);
            printf("0x%X\n", output);
        }
    }

    return 0;
}