#include<stdio.h>
int main(){
int n,flag;
printf("Enter the number :");
scanf("%d",&n);

for(int i=2;i<=n;i++){
flag=0;
for(int y=2;y<i;y++){
if(i%y==0){
        flag=1;
        break;
}
}
if(flag!=1)
printf("%d ",i);
}
}
