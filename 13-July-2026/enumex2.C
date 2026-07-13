#include<stdio.h>
#include<conio.h>
enum day{
sunday,monday,tuesday,wednesday,thursday,friday,saturday};
int main(){
enum day today=wednesday;
switch(today){
case 1:printf("Today is MOnday");break;
case 2:printf("Today is Tueseday");break;
case 3:printf("Today is Wedneseday");break;
case 4:printf("Today is thurs");break;
case 5:printf("Today is fri");break;
case 6:printf("Today is satur");break;
case 7:printf("Today is sunday");break;
getch();
return 0;
}
