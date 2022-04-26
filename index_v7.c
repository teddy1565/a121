#include <stdio.h>
#include <stdlib.h>

int checkPrime(int x) {
    if (x <= 1) {
        return 0;
    }
    for (int i=2; i*i <= x; i++) {
        if (x%i == 0) {
            return 0;
        }
    }
    return 1;
}
int main(void) {
    int n,m;
    while(scanf("%d %d",&n ,&m) != EOF) {
        int counter = 0;
        if ((n&1) == 0) {
            if (n == 2) {
                counter++;
            }
            n++;
        }
        for (int i=n; i<=m; i+=2) {
            if (checkPrime(i)) {
                counter++;
            }
        }
        printf("%d\n", counter);
    }
    return 0;
}