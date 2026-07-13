#include<stdio.h>
#include<conio.h>
int main(){
int i=2,n;
printf("Enter the number:");
scanf("%d",&n);
print:
    printf("Even numbers %d \n ",i);
    i=i+2;
if(i<n)goto print;
}
