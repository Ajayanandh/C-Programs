#include<stdio.h>
#include<conio.h>
int main(){
int i=0;
print:
    printf("%d\n",i);
    i++;
if(i<10)goto print;
getch();
return 0;

}
