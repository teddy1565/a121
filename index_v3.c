#include <stdio.h>
#include <stdlib.h>

int checkPrime(int n) {
    for (int i=3;i<=n;i+=2) {
        if (i == n) {
            return 1;
        } else if((n%i == 0)) {
            return 0;
        }
    }
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
        for (int i=n;i<=m;i+=2) {
            if (checkPrime(i)) {
                counter++;
            }
        }
        printf("%d\n", counter);
    }
    return 0;
}