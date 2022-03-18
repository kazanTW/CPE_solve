#include <stdio.h>

int main(void) {
    char string;
    int n = 0;

    while(scanf("%c", &string) != EOF) {
        if(string == '"') {
            n++;
            if(n % 2 == 1) {
                printf("``");
            } else {
                printf("''");
            }
        } else {
            printf("%c", string);
        }
    }

    return 0;
}