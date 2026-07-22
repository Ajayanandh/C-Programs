#include<stdio.h>
int main(){
int n,f;
printf("Enter the number ");
scanf("%d",&n);
for(int i=2;i<n;i++){
if(n%i==0){
f=1;break;}}
if(f==1)printf("Not a prime number");
else printf("Prime number ");}
