#include<stdio.h>
#include<conio.h>
int main(){
int a,b,c;
printf("Enter the three numbers:");
scanf("%d%d%d",&a,&b,&c);
switch(a>b?(a>c?1:3):(b>c?2:3)){
case 1: printf("A is greater");
        break;
case 2:
      printf("B is greater");
      break;
case 3:
      printf("c is greater");
      break;
      }
getch();
return 0;
}
