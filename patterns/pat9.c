//a 1 + 2 b
//c 3 + 4 d
//e 5 + 6 f
//g 7 + 8 h
#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==1)
                printf("%c",'a'+(i-1)*2);
            else if(j==2)
            printf("%d",1+(i-1)*2);
            else if (j==3)
            printf("+");
            else if(j==4)
            printf("%d",2+(i-1)*2);
            else if(j==5)
            printf("%c",'b'+(i-1)*2);
            
            
        } printf("\n");
    }
}