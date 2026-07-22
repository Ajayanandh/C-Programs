#include<stdio.h>
#include<string.h>
int main(){
int rem=0,n,a=0;
char hex[199];
int bi[100];
printf("Enter the hexadecimal number :");
scanf("%s",hex);
int s=8;
for(int i=0;i<8;i++){
    int c=hex[i];
    if(c==65)c=10; if(c==66)c=11; if(c==67)c=12; if(c==68)c=13; if(c==69)c=14; if(c==69)c=15;
    rem=c%2;
    c/=2;
  bi[s--]=rem ;
  a++;
}


}
