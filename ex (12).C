#include<stdio.h>
#include<conio.h>
void main(){
  int num;
  printf("Enter the number:");
  scanf("%d",&num);
  if(num >=0){
  printf("%d is positive number");
  }
  else{
  printf("%d is negative number");
  }
  getch();
}