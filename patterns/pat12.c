//1 A # B 2
//3 C # D 4
//# # # # #
//5 E # 6 F
//7 G # 8 H
#include<stdio.h>
int main(){
    int n,i,j,num=1;
    char ch='A';
    printf("enter n value:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==3 || j==3){
                printf("#");
            }
            else if(j==1 || j==5){
                
                printf("%d",num);
                num++;
            }
            else {
                printf("%c",ch);
                ch++;
            }
        }
        printf("\n");
    }
   
    return 0;
}