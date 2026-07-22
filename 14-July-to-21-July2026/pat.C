#include<stdio.h>
#include<math.h>
int main(){
int n,x,sum=0;
printf("Enter the range :");
scanf("%d",&n);
printf("Enter the x: ");
scanf("%d",&x);
for(int i=0;i<n;i++){
sum=sum+pow(x,i);
}
printf("%d",sum);
}
