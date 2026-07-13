#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(){
char n;
printf("Enter the character :");
scanf("%c",&n);
if(isalpha(n))
    printf("Given is alphabet\n");
else printf("NOt a alphabet\n");
if(isupper(n))
    printf("Given is alphabet  is uppercase\n");
else printf(" alphabet lowercase\n");
if(isalpha(n))
printf("The character is alphabet or digit or special charecter");
else if(isdigit(n)) printf("The character is digit");
else printf("Special character");

return 0;
}
