#include<stdio.h>
#include<conio.h>
enum day{
MON;
TUE;
WED;
THU;
FRI;
SAT;
SUN;
}
void main(){
enum day today=MON;
printf("%d",today);
getch();
}
