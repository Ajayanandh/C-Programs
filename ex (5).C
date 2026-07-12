#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,greatest;
clrscr();
printf("Enter 3 numbers:");
scanf("%d%d%d",&a,&b,&c);
greatest=a>b?((a>c ? a:c)):((b>c ? b:c));
printf("Greatest number is=%d",greatest);
getch();
}