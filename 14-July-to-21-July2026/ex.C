#include<stdio.h>
#include<string.h>
int main(){
int n,rem,q,a=0;

int bi[100];
printf("Enter the decimal number :");
scanf("%d",&n);
q=n;
int s=n;
while(q>0){
    rem=q%16;
    q/=16;
    bi[s--]=rem;
    a++;
}
for(int i=n-a+1;i<=n;i++){
      if(bi[i]==10){printf("A");continue;}
      if(bi[i]==11){printf("B");continue;}
      if(bi[i]==12){printf("C");continue;}
      if(bi[i]==13){printf("D");continue;}
      if(bi[i]==14){printf("E");continue;}
      if(bi[i]==15){printf("F");continue;}

    printf("%d",bi[i]);
}
}

