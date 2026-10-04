#include<stdio.h>
int main(){
    int n,digit,sum=0;
    printf("enter n value:");
    scanf("%d",&n);
    int temp=n;
    while(temp>0){
    digit=temp%10;
     
    sum=sum+digit*digit*digit;
    temp=temp/10;
    }
    if(sum==n){
        printf("%d amstrong",n);

    }
    else
    printf("%d not amstrong",n);
    return 0;
}