#include<stdio.h>
#include<conio.h>
int main(){
int n;
int a[100];
printf("Enter the; size of the array :");
scanf("%d",&n);
a[0]=0;a[1]=1;
printf("\n Fibonacci series :\n");
for(int i=2;i<n;i++){
a[i]=a[i-1]+a[i-2];
}
for(int i=0;i<n;i++){
printf("%d",a[i]);

}

}
