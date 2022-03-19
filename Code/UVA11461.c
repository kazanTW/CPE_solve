#include <stdio.h>
#include <math.h>

int countSqrt(int n, int m);

int main(void) {
    int a, b;
    while(scanf("%d %d", &a, &b) && (a || b)) {
        int count = countSqrt(a, b);
        printf("%d\n", count);
    }

    return 0;
}

int countSqrt(int n, int m) {
    int count = 0;
    int raiz = 0;
    if(n == 0) {
        n++;
    }

    for(int i = n; i <= m; i++) {
        raiz = (int)sqrt(i);        // This place are weird
        if((raiz * raiz) == i) {
            count++;
        }
    }

    return count;
}