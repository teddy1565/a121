#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    // d-(d&(d^7))
    // 7+((a+7)/6)%7
    // 7+parseInt((b+7)/6)%7

    //59768
    //2591
    //((parseInt((i^2)/5)*9)&1)
    //32771721
    // printf("[%d]:%d %d\t ",i,(((i<<1)^3)^2)-5,((((i<<1)^3)^2)^6));
    // (n<<1)^1
    for(int i=3,last=2,j=1;i<75;i+=2){
        
        int pr=1;
        for(int j=3;j<i;j+=2){
            if(i%j==0){
                pr=0;
                break;
            }
        }
        if(pr==1){
            printf("%d\t",(i));
            last=i;
            j++;
        }
        if(j%6==0){
            printf("\n");
            j=1;
        }
    }
    return 0;
}