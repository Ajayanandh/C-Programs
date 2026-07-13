#include<stdio.h>
#include<conio.h>
int main(){
int n;
printf("Enter the number :");
scanf("%d",&n);
int t=n%7;
printf("%d",t);
switch(t){
case 0 :
         printf("Multiple of seven");
         break;
default:
        printf("Not a multiple of seven ");
}
getch();
return 0;
}

