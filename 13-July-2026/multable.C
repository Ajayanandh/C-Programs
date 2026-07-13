#include<stdio.h>
#include<conio.h>
int main(){
int i=1,n;
printf("Enter the tabe :");
scanf("%d",&n);
print:printf(" %d * %d = %d\n ",i,n,n*i);
      i++;
if(i<=10)goto print;
return 0;
}
