//a 1 b 2 c
//d 3 e 4 f
//g 5 h 6 i
//j 7 k 8 l
//i 9 + 10 j
#include<stdio.h>
int main(){
    int n,i,j,num=1;
    char ch='a',a='i',b='j';
    printf("enter n :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j%2==1){
                if(i==5&& j==3){
                    printf("+");}
                    else if(i==5 && j==1){
                    printf("%c",a);}
                
                else if(i==5 && j==5){
                    printf("%c",b);
                }
                else 
                printf("%c",ch++);}
            else{
                printf("%d",num++);
            }
    }printf("\n");
}
    return 0;
}