#include<stdio.h>
int main(){
int n,rev;
printf("Enter the number :");
scanf("%d",&n);
int temp=n;
while(temp>0){
rev=rev*10+temp%10;
temp/=10;
}
printf("%d ",rev);















}
