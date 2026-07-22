#include<stdio.h>
int main(){
int n,res;
printf("Enter the number :");
scanf("%d",&n);
for(int i=1;i*i<=n;i++){
printf("%d ",i*i);
res+=i*i;
}
printf("\nThe sum of the squares is %d ",res);
}
