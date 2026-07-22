#include<stdio.h>
int main(){
int n,rem,sum;
printf("Enter the n:");
scanf("%d",&n);
while(n>0){
rem=n%10;
sum+=rem;
n/=10;
}
printf("%d is the sum digits",sum);}
