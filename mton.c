#include<stdio.h>
int main(){
    int m,n,i,even=0,odd=0,sumofevens=0,sumofodds=0;
    int productofeven=1,productofodd=1;
    printf("enter m and n values:");
    scanf("%d %d",&m,&n);
    printf("even:");
    for(i=m;i<=n;i++){
        if(i%2==0){
            printf("%d ",i);
             sumofevens=sumofevens+i;
             productofeven=productofeven*i;
             
        }
    }
             printf("\n");
        printf("odd:");
         for(i=m;i<=n;i++){
        if(i%2!==0){
            printf("%d ",i);
            sumofodds=sumofodds+i;
            productofodd=productofodd*i;
            
        }
    }

    
    printf("sum of evens:%d\n",sumofevens);
    printf("sum of odds:%d\n",sumofodds);
    printf("product of evens:%d\n",productofeven);
    printf("product of odds:%d\n",productofodd);
    return 0;
}