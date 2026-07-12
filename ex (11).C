#include<stdio.h>
#include<conio.h>
void main()
{
  int num ;
  printf("Enter the number:");
  scanf("%d",&num);
  if(num %11==0&& num%32==0){
  printf("The number is divisible by 11 and 32");
  }
  else{
  printf("Not divisible");
  getch();
}