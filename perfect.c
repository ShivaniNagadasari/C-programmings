#include<stdio.h>
int main(){
    int  n,i,sum=0;
    printf("enter n value:");
    scanf("%d",&n);

        for(i=1;i<=n/2;i++){
            if(n%i==0){
                sum=sum+i;
                
            }
            printf("%d ",sum);
        }
        if(sum==n)
        printf("perfect");
        else
        printf("not perfect");
        return 0;
        
    
}