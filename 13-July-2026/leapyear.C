#include<stdio.h>
#include<conio.h>
int main(){
int year;
printf("Enter the year :");
scanf("%d",&year);
if(year%400||year%4&&year%100!=0)printf("Leap year");
else printf("Not a leap year ");
return 0;
}
