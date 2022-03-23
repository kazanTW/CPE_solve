#include <stdio.h>

int main(void) {
    int cans;
    int empty, total;

    while(scanf("%d", &cans) != EOF) {
    empty = cans;
    total = cans;
    while(empty >= 3) {
        total += (empty / 3);
        empty = (empty / 3) + (empty % 3);
    }
    printf("%d\n", total + empty / 2);
    }

    return 0;
}