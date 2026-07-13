#include<stdio.h>
#include<conio.h>
int main(){
int i=1,n;
printf("Enter the number:");
scanf("%d",&n);
print:
    printf("Odd numbers %d \n ",i);
    i=i+2;
if(i<n)goto print;
}
