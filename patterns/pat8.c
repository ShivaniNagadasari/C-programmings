//A B C D
//1 2 3 4
//A B C D
//1 2 3 4
#include<stdio.h>
int main(){
    int n=4,i,j;
for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i%2==1){
            printf("%c",64+j);}
            else if(i%2==0){
            printf("%d",j);
        }
    }
    printf("\n");
  }
printf("\n");
//1 2 3 4 
//a b c d
//1 2 3 4
//a b c d
for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i%2==0){
            printf("%c",96+j);}
            else if(i%2==1){
            printf("%d",j);
        }
    }
    printf("\n");
  }
printf("\n");
//A 1 B 2
//C 3 D 4
//E 5 F 6
//G 7 H 8
char cha='A';
int num=1;
for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j%2==1){
            printf("%c",cha);
        cha++;
    }
            else {
            printf("%d",num);
            num++;
        }
    }
    printf("\n");
  }
printf("\n");
//1 a 1 a
//1 a 1 a
//1 a 1 a
//1 a 1 a
for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j%2==0){
            printf("%c",97);}
            else {
            printf("1");
        }
    }
    printf("\n");
  }
printf("\n");
//1 2 3 4
//5 6 7 8
//9 1 2 3
//4 5 6 7
int counts=1;
for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d",counts);
        counts++;
             if(counts>9)
             counts=1;
        }
        printf("\n");
    }
    return 0;
  }