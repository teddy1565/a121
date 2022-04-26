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
        for (int i=n; i<=m; i++) {
            if ((i&1)) {
                if (checkPrime(i)) {
                    counter++;
                    continue;
                }
            }
            if (i == 2) {
                counter++;
            }
            
        }
        printf("%d\n", counter);
    }
    return 0;
}