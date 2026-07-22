#include<stdio.h>
int main(){
int n,flag;
printf("Enter the number :");
scanf("%d",&n);
int a=0,b=1,c;
printf("0 ");
for(int i=1;i<n;i++){
printf("%d ",b);
c=a+b;
a=b;
b=c;

}

}
