#include<stdio.h>
#include<math.h>
int fact(int a){
    int fact=1;
if(a<1) return 1;
else{

    return fact;
} }
int main(){
int x,n;
float res;
printf("Enter the number ");
scanf("%d",&x);
printf("Enter the range :");
scanf("%d",&n);
for(int i=0;i<=n;i+=2){
sq=pow(x,i);
fact=1;
    for(int j=1;j<i;j++){
        fact=fact*j;
    }
    temp=sq/fact;
    if(k%2==1&&k!=1){
        temp=-temp;
    }
}
printf("%f",res);
}

