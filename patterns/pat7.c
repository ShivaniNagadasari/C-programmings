//5 4 3 2 1
//5 4 3 2 1
//5 4 3 2 1
//5 4 3 2 1
//5 4 3 2 1
#include<stdio.h>
int main(){
    int n=5,i,j;
for(i=1;i<=n;i++){
        for(j=n;j>=1;j--){
            printf("%d",j); 
        }
    printf("\n");
}
//e d c b a
//e d c b a
//e d c b a
//e d c b a
//e d c b a
printf("\n");
for(i=1;i<=n;i++){
        for(j=n;j>=1;j--){
            printf("%c",96+j);     
        }
    printf("\n");
}
return 0;
}