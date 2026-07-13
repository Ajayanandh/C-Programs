#include<stdio.h>
#include<conio.h>
int main(){
char in;
printf("Enter the character :");
scanf("%c",&in);
switch(in){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
printf("Vowel");
break;
default :

    printf("Consonant");
}
getch();

return 0;
}
