

#include <stdio.h>

int main()
{
    int n,sum=0;
printf("enter num:");
scanf("%d",&n);
 int temp=n;

while(temp>0){
  
  int digit=temp%10;
   int fact=1;
  for(int i=1;i<=digit;i++){
    fact=fact*i;}
  sum= sum+fact;
  
  temp=temp/10;
}
  if(sum==n){
      printf("strong");
  }
  else{
      printf("not strong");
  }
  return 0;
}
