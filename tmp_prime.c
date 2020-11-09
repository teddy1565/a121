#include<stdio.h>

int main(){
    for(int i=0,j=1;i<200;i++,j++){
        printf("%d\t",i^1);
        if(j%10==0)printf("\n");
    }
    return 0;
}