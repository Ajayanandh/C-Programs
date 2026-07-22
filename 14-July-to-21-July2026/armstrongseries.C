#include<stdio.h>
#include<math.h>
int main(){
int n,temp,res,og,digits,rem;
printf("Enter the number :");
scanf("%d",&n);

for(int i=1;i<=n;i++){
 temp=i;
og=i;
res=0;digits=0;
while(temp>0){
temp/=10;
digits++;
}
while(og>0){
rem=og%10;

res+=pow(rem,digits);
og/=10;
}
if(res==i)printf("%d ",res);
}


}

