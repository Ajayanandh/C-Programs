#include<stdio.h>
#include<math.h>
int main(){
int n,digit,x,rem,temp,sum;

printf("Enter the number :");
scanf("%d",&n);
x=n;
temp=n;
while(temp>0){
temp/=10;
digit++;}
for(int i=1;i<=digit;i++){
rem=n%10;
sum=sum+(int)pow(rem,digit);
n/=10;
}
if(sum==x)printf("Armstrong number");
else printf("Not Armstrong ");
}
