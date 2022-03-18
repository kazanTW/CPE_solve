#include <stdio.h>

void check(int n, int m);

int main(void) {
    int s, d;
    while(scanf("%d %d", &s, &d) != EOF) {
        check(s, d);
        continue;
    }
    
    return 0;
}

void check(int n, int m) {
    int days = n;
    while(days < m) {
        n += 1;
        days += n;
    }

    printf("%d\n", n);
}