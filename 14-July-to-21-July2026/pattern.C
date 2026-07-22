#include<stdio.h>
#include<math.h>
int main(){
int n,sum=0,x=9,res=0;

printf("Enter the number :");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    res=res+x;
        x=(x*10)+9;


}
printf("%d",res);
}
