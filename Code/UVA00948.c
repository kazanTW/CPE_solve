#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int testcase;
    int fibonacci[40] = {0, 1};
    int i;
    for(i = 2; i < 40; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    scanf("%d", &testcase);
    while(testcase--) {
        int decNum;
        scanf("%d", &decNum);
        printf("%d = ", decNum);
        bool flag = false;
        for(int i = 39; i >= 2; i--) {
            if(decNum >= fibonacci[i]) {
                decNum -= fibonacci[i];
                flag = true;
                printf("1");
            }
            else if(flag) {
                printf("0");
            }
        }        
        printf(" (fib)\n");
    }

    return 0;
}