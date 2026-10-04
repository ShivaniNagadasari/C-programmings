// A A % A
//A A A A
//A A A A
//% A A A
#include<stdio.h>
int main(){
    int n=4,i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 && j==3 || i==4 && j==1){
                printf("%%");
            }
            else
            printf("A");
        }
    
    printf("\n");
}
    return 0;
}