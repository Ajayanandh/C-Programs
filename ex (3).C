#include<stdio.h>
#include<conio.h>
void main(){
int r,circumference;
printf("Enter radius:");
scanf("%d",&r);
circumference=3.14f*r*r;
printf("Circumference of Circle:%d",circumference);
getch();
}