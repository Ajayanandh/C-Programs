#include<stdio.h>
#include<math.h>
int main(){
int n,x;
float sum=0;
printf("Enter the range :");
scanf("%d",&n);

for(int i=1;i<=n;i++){
sum=sum+(1/pow(i,i));

}
printf("%f",sum);
}
