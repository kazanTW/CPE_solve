#include <stdio.h>

int main(void) {
    int T;
    int a, b;
    int i;
    scanf("%d", &T);
    for(int i = 0; i < T; i++) {
        int sum = 0;
        scanf("%d", &a);
        scanf("%d", &b);
        if(a % 2 == 0) {
            a += 1;
        }
        for(int j = a; j <= b; j += 2) {
            sum += j;
        }
        printf("Case %d: %d\n", (i + 1), sum);
    }

    return 0;
}