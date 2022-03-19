#include <stdio.h>

int hashmat(int hash, int enemy);

int main(void) {
    int hashSoldiers, enemySoldiers;
    while(scanf("%d %d", &hashSoldiers, &enemySoldiers) != EOF) {
        printf("%d\n", hashmat(hashSoldiers, enemySoldiers));
    }

    return 0;
}

int hashmat(int hash, int enemy) {
    int numbers = 0;

    if(hash > enemy) {
        numbers = hash - enemy;
    } else if (hash < enemy) {
        numbers = enemy - hash;
    }

    return numbers;
}