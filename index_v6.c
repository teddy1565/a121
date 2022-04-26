#include <stdio.h>
int Find_the_Primes(int x){
    if(x<=1) return 0;
    for(int i=2;i*i<=x;i++)
        if(x%i==0) return 0;
    return 1;
}
int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        int sum=0;
        for(int i=a;i<=b;i++){
            if(Find_the_Primes(i)==1) sum++;
        }
        printf("%d\n",sum);
    }
    return 0;
}