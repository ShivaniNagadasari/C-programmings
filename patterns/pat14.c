 //1 a + 2 b
 //3 c + 4 d
 //5 e + 6 f
//7 g + 8 h
//9 i + 10 j
#include<stdio.h>
int main(){   
    int n=5,i,j,num=1;
     char cha='a';
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j==3){
                printf("+");
            }
            else if(j==1 || j==4){
                printf("%d",num);
                num++;
            }
            else if(j==2 || j==5){
              printf("%c",cha);
              cha++;
            }
        }
        printf("\n");
    }
    return 0;
}