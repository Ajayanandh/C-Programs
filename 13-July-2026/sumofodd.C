#include<stdio.h>
#include<conio.h>
int main(){
int i=1,n,sum=0;
printf("Enter the number:");
scanf("%d",&n);
print:sum=sum+i;
i+=2;
if(i<=n)goto print;
printf("Sum of odd numbers %d",sum);
return 0;

}
