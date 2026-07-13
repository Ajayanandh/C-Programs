#include<stdio.h>
#include<conio.h>
enum day{
MON,
TUE,
WED,
THU,
FRI,
SAT,
SUN,
};
int main(){
enum day today=TUE;
printf("%d",today);
getch();
return 0;
}
