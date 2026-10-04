//1 1 1 1
//1 1 @ 1
//1 $ 1 1
//1 1 1 1
#include<stdio.h>
int main(){
    int n=4,i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==2 && j==3){
                printf("@");
            }
            else if(i==3 && j==2){
                printf("$");
            }
            else
            printf("1");
        }
    
    printf("\n");}
    return 0;
}