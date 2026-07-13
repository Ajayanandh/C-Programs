#include<stdio.h>
#include<conio.h>
int main(){
int i=1,n,fact=1;
printf("Enter the number :");
scanf("%d",&n);
print:fact=fact*i;
i++;
if(i<=n)goto print;
printf("Factorial is %d",fact);
}
