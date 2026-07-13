#include<stdio.h>
#include<conio.h>
int main(){
int i=2,n,sum=0;
printf("Enter the number:");
scanf("%d",&n);
print:sum=sum+i;
i+=2;
if(i<=n)goto print;
printf("Sum of even %d",sum);
return 0;

}
