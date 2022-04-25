#include <stdio.h>
#include <stdlib.h>

typedef struct primeTable {
    int n;
    struct primeTable *next;
} primeTable;

int checkPrime(int n, primeTable *op) {
    primeTable *oop = op;
    while(oop!=NULL) {
        if((n % oop->n) == 0) {
            return 0;
        }
        oop = oop->next;
    }
}

int main(void) {
    int n,m;
    primeTable *p = (primeTable*) malloc(sizeof(primeTable));
    p->next = NULL;
    primeTable *op = p;
    while(scanf("%d %d",&n ,&m) != EOF) {
        int counter = 0;
        
        if(!(n&1)) {
            if (n == 2) {
                counter++;
                p->n = 2;
                p->next = (primeTable*) malloc(sizeof(primeTable));
                p = p->next;
                p->next = NULL;
            }
            n++;
        }
        for (int i=n;i<=m;i+=2) {
            if (checkPrime(i, op)) {
                counter++;
                p->n = i;
                p->next = (primeTable*) malloc(sizeof(primeTable));
                p = p->next;
                p->next = NULL;
            }
        }
        printf("%d\n", counter);
    }
    return 0;
}