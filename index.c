#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
        int counter=0;
        if(a<14){
            if(a==1||a==0)a=2;
            for(int i=a;i<=b&&i<18;i++){
                if(i==2||(((i&1)==1)&&i!=9&&i!=15))counter++;
            }
            a = 19;
        }
        a+=((a&1)+1)%2;
        for(int i=a;i<=b;i+=2){
            int Prime=0;
            int IT=1;
            for(int l=4,k=0;l<i;l+=2,k++){/*  (2^x)*n+1 || (2^x)*n-1 */
                if(i%l!=1||((i%l)&(l>>k)-1)!=0){/* */
                    IT=0;
                    break;
                }
            }
            //1 
            /*(i%6==1||i%6==5)&&(i%8==1||i%8==3||i%8==5||i%8==7)&&(i%10==1||i%10==3||i%10==7||i%10==9)&&(i%4==1||i%4==3)&&(i%12==1||i%12==5||i%12==7||i%12==11)&&(i%14==1||i%14==9||i%14==3||i%14==5||i%14==11||i%14==13)&&(i%18==1||i%18==5||i%18==7||i%18==11||i%18==13||i%18==17)*/
            if(IT==1){
                Prime=1;
                for(int j=3;j<i;j+=2){
                    if(i%j==0){
                        Prime=0;
                        break;
                    }
                }
            }
            if(Prime==1)counter++;
        }
        printf("%d\n",counter);
    }
    return 0;
}