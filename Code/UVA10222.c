#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    const char* keyboard = {"`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./"};
    const char* keyboard_shift = {"~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?"};
    char table[128] = {0};

    int len = strlen(keyboard);
    for (int i = 0; i < len; i += 1) {
        table[keyboard[i]] = keyboard[(len + i - 2) % len];
    }

    int len_shift = strlen(keyboard_shift);
    for (int i = 0; i < len_shift; i += 1) {
        table[keyboard_shift[i]] = keyboard_shift[(len_shift + i - 2) % len_shift];
    }

    char ch;
    while (ch = getchar(), ch != EOF) {
        if (ch == ' ') {
            putchar(' ');
        }
        else if (ch == '\n') {
            putchar('\n');
        }
        else {
            putchar(tolower(table[ch]));
        }
    }

    return 0;
}