//0 0 0 0
//0 0 0 0
//^ 0 0 0 
//0 0 0 @
#include<stdio.h>
int main(){
    int n=4,i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==3 && j==1){
                printf("^");
            }
            else if(i==4 && j==4){
                printf("@");
            }
            else
            printf("0");
        }
    
    printf("\n");}
    return 0;
}