#include<stdio.h>
#include<conio.h>
void main()
{
int num;
printf("Enter the number:");
scanf("%d",&num);
if(num%5==0&&num%7==0){
printf("%d is divisible by both 5 and 7");
}
else if(num%5==0){
printf("%d is divisible by 5");
}
else if (num%7==0){
printf("%d is divisible by 7");
}
else{
printf("%d is not divisible by both 5 and 7");
}
getch();
}
