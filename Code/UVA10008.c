#include <stdio.h> 
#include <string.h>

int main(void) {
    int lines;
    char str[999] = {0};
    int count[91] = {0};
    int i, j;

    scanf("%d", &lines);
    getchar();

    while(lines--) {
        fgets(str, 999, stdin);

        for(i = 0; i < strlen(str); i++) {
            if(str[i] >= 'a' && str[i] <= 'z') {
                count[str[i] - 'a' + 'A']++;
            } else {
                count[str[i]]++;
            }
        }
    }

    for(i = sizeof(str); i >= 1; i--) {
        for(j = 'A'; j <= 'Z'; j++) {
            if(count[j] == i) {
                printf("%c %d\n", j, i);
            }
        }
    }

    return 0;
}