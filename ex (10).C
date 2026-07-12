#include<stdio.h>
#include<conio.h>
void main(){
   int a=10,b=8,c=16;
   if((a>b) && (a>c)){
      printf("a is greatest");
   }
   else if((b>a) &&(b>c)){
      printf("b is greatest");
   }
   else{
    printf("c is greatest");
    }
    getch();
}