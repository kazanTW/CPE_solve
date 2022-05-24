#include <stdio.h>
#include <string.h>

int degree(char *str);

int main(void) {
    int nine_degrees;
    char numbers[1001] = {0};

    while(scanf("%s", numbers)) {
        if(numbers[0] == '0' && strlen(numbers) == 1) {
            break;
        } else {
            printf("%s ", numbers);
            nine_degrees = degree(numbers);
            if(nine_degrees) {
                printf("is a multiple of 9 and has 9-degree %d.\n", nine_degrees);
            } else {
                printf("is not a multiple of 9.\n");
            }
        }
        memset(numbers, 0, sizeof(numbers));
    }

    return 0;
}

int degree(char *str) {
    int multiple, degrees = 0;
    if(strlen(str) == 1 && str[0] == '9') {
        return 1;
    }
    while(strlen(str) >= 2) {
        multiple = 0;
        for(int i = 0; i < strlen(str); i++) {
            multiple += str[i] - '0';
        }
        if(multiple % 9 == 0) {
            degrees++;
        }

        sprintf(str, "%d", multiple);
    }

    return degrees;
}