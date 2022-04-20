#include <stdio.h>

int s_delta(int v, int t);

int main(void) {
    int v, t;
    while(scanf("%d %d", &v, &t) != EOF) {
        printf("%d\n", s_delta(v, t));
    }

    return 0;
}

int s_delta(int v, int t) {
    int s;
    s = v * t * 2;

    return s;
}