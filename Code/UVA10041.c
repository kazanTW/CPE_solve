#include <stdio.h>
#include <stdlib.h>

void bubble(int *s, int r);
void swap(int* p1, int* p2);
void minDist(int *s, int r);
void sum(int *s, int r, int min);

int main(void) {
    int testcases = -1;
    int members;
    int code[500] = {0};
    scanf("%d", &testcases);

    for(int i = 0; i < testcases; i++) {
        scanf("%d", &members);
        for(int j = 0; j < members; j++) {
            scanf("%d", &code[j]);
        }
        bubble(code, members);
    }

    return 0;
}

void minDist(int *s, int r) {
    sum(s, r, s[(r / 2)]);
}

void swap(int* p1, int* p2) {
    int temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void bubble(int *s, int r) {
    for(int i = 0; i < r - 1; i++) {
        for(int j = 0; j < r - i - 1; j++) {
            if(s[j] > s [j + 1]) {
                swap(&s[j], &s[j + 1]);
            }
        }
    }
    minDist(s, r);
}

void sum(int *s, int r, int min) {
    int sum = 0;

    for(int i = 0; i < r; i++) {
        sum += abs(min - s[i]);
    }
    printf("%d\n", sum);
}