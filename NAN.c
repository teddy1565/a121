#include<stdio.h>

// int prime(int i){
//     int IT=1;
//     for(int l=6;l<i;l+=2){/*  (2^x)*n+1 || (2^x)*n-1 */
//         if(i%l!=1&&((i%l)&(l>>1)-1)!=0){/* */
//             IT=0;
//             break;
//         }
//     }
//     return IT;
// }
int prime(int i){
    int R6=0;
    int res=0;
    for(int r=i,b=1;r>=1;r/=6,b*=10){
        if(r<6){
            R6+=(r*b);
            break;
        }
        R6+=((r%6)*b);
    }
    if(R6==0&&i==0)return 0;
    if(((R6%6)%(i%6))==0)res=1;
    return res;
}
int main(){
    for(int i=7,j=1;i<100;i+=2,j++){
        printf("%d:%d\t",i,i^5);
        if(j%5==0)printf("\n");
    }
    return 0;
}