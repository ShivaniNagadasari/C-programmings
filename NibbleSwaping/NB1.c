// 0x12345678 input
// 0x12654378 output
#include<stdio.h>
int main(){
    int a=0x12345678;
    int b=0;
    b=(a& 0xFF0000FF) | ((a & 0x00F00000)>>12) |((a& 0x000F0000)>>4) |((a & 0x0000F000)<<4) |((a & 0x00000F00)<<12);
    printf("%x",b);
    return 0;
}