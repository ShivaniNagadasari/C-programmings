//* * * a
//* * 1 *
//* @ * *
//! * * *
#include<stdio.h>
int main(){
    int n=4,i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 && j==4){
                printf("a");
            }
            else if(i==2 && j==3){
                printf("1");
            }
            else if(i==3 && j==2){
                printf("@");
            }
            else if(i==4 && j==1){
                printf("!");
            }
            else
            printf("*");
        }
    
    printf("\n");}
    return 0;
}