#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int cases;
    int temp;
    bool flag;

    while(scanf("%d", &cases) != EOF) {
        int array[3000];
        for(int i = 0; i < cases; i++) {
            scanf("%d", &array[i]);
        }

        int check[3000] = {0};
        for(int i = 0; i < cases - 1; i++) {
            check[i] = abs(array[i] - array[i + 1]);
        }

        for(int i = 0; i < cases - 1; i++) {
            for(int j = i + 1; j < cases - 1; j++) {
                if(check[i] > check[j]) {
                    temp = check[i];
                    check[i] = check[j];
                    check[j] = temp;
                }
            }
        }
        flag = false;

        for(int i = 0; i < cases - 1; i++) {
            if(check[i] != i + 1) {
                flag = true;
                break;
            }
        }

        if(flag) {
            printf("Not jolly\n");
        } else {
            printf("Jolly\n");
        }
    }

    return 0;
}