#include <stdio.h>

void compare(int *a, int *b) {
    int temp;

    if(*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main(void) {
    int num1, num2;
    int n;

    while(scanf("%d %d", &num1, &num2) != EOF) {
        printf("%d %d ", num1, num2);
        compare(&num1, &num2);
        int max = 0;
        while(num1 <= num2) {
            int count = 1;
            n = num1;

            while(n != 1) {
                if(n % 2 == 1) {
                    n = 3 * n + 1;
                } else {
                    n /= 2;
                }
                count++;
            }
            num1++;

            if(count > max) {
                max = count;
            }
        }
        printf("%d\n", max);
    }

    return 0;
}