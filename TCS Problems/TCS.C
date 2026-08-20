#include<stdio.h>
int main(){
    int a[100];
    a[0]=0;
    a[1]=0;
    for(int i=0;i<20;i++){
      if(i%2==0&&i>=2){
        a[i]=a[i-2]+7;
      }
      else if(i%2!=0&&i>=3){
        a[i]=a[i-2]+6;
      }
    }
    for(int i=0;i<15;i++){
        printf("%d ",a[i]);
    }
    printf("\n 15 th : %d",a[14]);
}