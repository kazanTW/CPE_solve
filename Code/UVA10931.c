#include <stdio.h>

int main(void) {
    int I;
    int i;
    while(scanf("%d", &I) && I) {
        int P = 0;
        int bitwise[31] = {0};
        for(i = 0; I > 0; i++) {
            if(I & 1) {
                P++;
            }
            bitwise[i] = I & 1;
            I >>= 1;
        }

        printf("The parity of ");
        for(int j = i - 1; j >= 0; j--) {
            printf("%d", bitwise[j]);
        }
        printf(" is %d (mod 2).\n", P);
    }

    return 0;
}