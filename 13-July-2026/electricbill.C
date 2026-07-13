#include<stdio.h>
#include<conio.h>
int main(){
int bill;
printf("Enter the electric reading :");
scanf("%d",&bill);
switch(bill<100){
case 1:printf("The bill is free");
       break;
default:
      switch(bill<500){
      case 1:printf("The bill is %d",(bill-200)*3);break;
    default :
        switch(bill<1000){}
        case 1: printf("The Biill is %d",(bill-200)*5);
        default: printf("The bill is %d",bill*5);
    }}
    getch();
    return 0;
}
