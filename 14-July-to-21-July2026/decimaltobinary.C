#include<stdio.h>
#include<string.h>
int main(){
int n,rem,q,a=0;

int bi[100];
printf("Enter the decimal number :");
scanf("%d",&n);
q=n;
for(int i=0;q>0;i++){
rem=q%2;
q/=2;
bi[i]=rem;
a++;

}

for(int i=a-1;i>=0;i--){
printf("%d",bi[i]);}
}
