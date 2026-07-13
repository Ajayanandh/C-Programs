#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
int i=1,n,sum=0,x;
printf("Enter the power number:");
scanf("%d",&n);
printf("Enter the number:");
scanf("%d",&x);
print:printf("%d ",(int)pow(x,i));i++;
if(i<=n) goto print;
}

