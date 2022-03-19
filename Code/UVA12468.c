#include <stdio.h>

int times(int n, int m);

int main(void) {
    int now, target;
    while(scanf("%d %d", &now, &target) && ((now != -1) || (target != -1))) {
        printf("%d\n", times(now, target));
    }

    return 0;
}

int times(int n, int m) {
    int distance;
    int distance1, distance2;
    if(n < m){
        distance1 = m - n;
        distance2 = (n + 100) - m;
    } else if(n > m) {
        distance1 = n - m;
        distance2 = (m + 100) - n;
    }
    if(distance1 > distance2) {
        distance = distance2;
    } else if(distance2 > distance1) {
        distance = distance1;
    }

    return distance;
}