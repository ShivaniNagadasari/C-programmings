//a=54231
//b=13245
#include<stdio.h>
int main(){
    int a=54231;
    int b=0,c=1;
    while(a>0){
        if(c==10000){
            b=b+a%10*1;
        }
        else if(c==1000){
            b=b+a%10*10;
        }
        else if(c==1){
            b=b+a%10*10000;
        }
        else if(c==10){
            b=b+a%10*1000;
        }
        else{
            b=b+a%10*c;
        }
        a=a/10;
        c=c*10;
        
    }
    printf("%d",b);
    return 0;
}