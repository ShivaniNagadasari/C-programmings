//a * * * b
//* c * d *
//* * f * *
//* g * h *
//i * * * j
#include<stdio.h>
int main(){
    int n=5,i,j;
    char ch='a';
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j  ||i+j==n+1 ){
                if(ch=='e') ch++;
                printf("%c",ch);
                ch++;
            }
            else
            printf("*");
        }
    
    printf("\n");
}
printf("\n");
//8 * * 7
//* 6 5 *
//* 4 3 *
//2 * * 1
int m=4,p=8;
for(i=1;i<=m;i++){
        for(j=1;j<=m;j++){
            if(i==j  ||i+j==n ){
                
                printf("%d",p);
                p--;
            }
            else
            printf("*");
        }
    
    printf("\n");
}
    return 0;
} 