#include<stdio.h>
#include<string.h>
int main(){
char c[100];
printf("Enter your name :");
scanf("%s",&c);
for(int i=0;i<strlen(c);i++){
for(int j=0;j<strlen(c);i++){
switch(c[i]){
case 1:
    if(i==0)printf("  *  ");
    if(i==2)printf("*   *");
    if(i==3)printf("*   *");
}
}
}
}
