#include<stdio.h>
#include<string.h>
int main(){
char name[100];
printf("Entet your name : ");
scanf("%s",name);

for(int i=0;i<5;i++){
for(int j=0;j<strlen(name);j++){
switch(name[j]){
case 'a' :
    if (i==0)printf("  **  ");
    if (i==1)printf(" *  * ");
    if (i==2)printf(" **** ");
    if (i==3)printf(" *  * ");
    if (i==4)printf(" *  * ");
 break;
case 'b' :
    if (i==0)printf(" ***  ");
    if (i==1)printf(" *  * ");
    if (i==2)printf(" **** ");
    if (i==3)printf(" *  * ");
    if (i==4)printf(" ***  ");
 break;

case 'c' :
    if (i==0)printf(" **** ");
    if (i==1)printf(" *    ");
    if (i==2)printf(" *    ");
    if (i==3)printf(" *    ");
    if (i==4)printf(" **** ");
 break;

case 'd' :
    if (i==0)printf(" ***  ");
    if (i==1)printf(" *  * ");
    if (i==2)printf(" *  * ");
    if (i==3)printf(" *  * ");
    if (i==4)printf(" ***  ");
 break;
case 'e' :
    if (i==0)printf(" **** ");
    if (i==1)printf(" *    ");
    if (i==2)printf(" **** ");
    if (i==3)printf(" *    ");
    if (i==4)printf(" **** ");
 break;
case 'f' :
    if (i==0)printf(" **** ");
    if (i==1)printf(" *    ");
    if (i==2)printf(" **** ");
    if (i==3)printf(" *    ");
    if (i==4)printf(" *    ");
 break;
case 'g' :
    if (i==0)printf(" **** ");
    if (i==1)printf(" *    ");
    if (i==2)printf(" * ** ");
    if (i==3)printf(" *  * ");
    if (i==4)printf(" ***  ");
 break;
case 'h' :
    if (i==0)printf(" *  * ");
    if (i==1)printf(" *  * ");
    if (i==2)printf(" **** ");
    if (i==3)printf(" *  * ");
    if (i==4)printf(" *  * ");
 break;
case 'i' :
    if (i==0)printf(" ***** ");
    if (i==1)printf("   *   ");
    if (i==2)printf("   *   ");
    if (i==3)printf("   *   ");
    if (i==4)printf(" ***** ");
 break;
case 'j' :
    if (i==0)printf(" **** ");
    if (i==1)printf("    * ");
    if (i==2)printf("    * ");
    if (i==3)printf(" *  * ");
    if (i==4)printf(" ***  ");
 break;
case 'k' :
    if (i==0)printf(" * ** ");
    if (i==1)printf(" * *  ");
    if (i==2)printf(" **   ");
    if (i==3)printf(" * *  ");
    if (i==4)printf(" * ** ");
 break;
case 'l' :
    if (i==0)printf(" *    ");
    if (i==1)printf(" *    ");
    if (i==2)printf(" *    ");
    if (i==3)printf(" *    ");
    if (i==4)printf(" **** ");
 break;
case 'm' :
    if (i==0)printf(" *   * ");
    if (i==1)printf(" * * * ");
    if (i==2)printf(" *   * ");
    if (i==3)printf(" *   * ");
    if (i==4)printf(" *   * ");
 break;
case 'n' :
    if (i==0)printf(" *  * ");
    if (i==1)printf(" ** * ");
    if (i==2)printf(" * ** ");
    if (i==3)printf(" *  * ");
    if (i==4)printf(" *  *  ");
 break;

case 'o' :
    if (i==0)printf(" **** ");
    if (i==1)printf(" *  * ");
    if (i==2)printf(" *  * ");
    if (i==3)printf(" *  * ");
    if (i==4)printf(" **** ");
 break;
case 'p' :
    if (i==0)printf(" ***  ");
    if (i==1)printf(" *  * ");
    if (i==2)printf(" **** ");
    if (i==3)printf(" *    ");
    if (i==4)printf(" *    ");
 break;
case 'q' :
    if (i==0)printf("  **  ");
    if (i==1)printf(" *  * ");
    if (i==2)printf(" * ** ");
    if (i==3)printf(" *  *** ");
    if (i==4)printf("  **  ");
 break;
case 'r' :
    if (i==0)printf(" **** ");
    if (i==1)printf(" *  * ");
    if (i==2)printf(" **** ");
    if (i==3)printf(" * *  ");
    if (i==4)printf(" *  * ");
 break;
case 's' :
    if (i==0)printf(" **** ");
    if (i==1)printf(" *    ");
    if (i==2)printf(" **** ");
    if (i==3)printf("    * ");
    if (i==4)printf(" **** ");
 break;
case 't' :
    if (i==0)printf(" ***** ");
    if (i==1)printf("   *   ");
    if (i==2)printf("   *   ");
    if (i==3)printf("   *   ");
    if (i==4)printf("   *   ");
 break;
case 'u' :
    if (i==0)printf(" *  * ");
    if (i==1)printf(" *  * ");
    if (i==2)printf(" *  * ");
    if (i==3)printf(" *  * ");
    if (i==4)printf(" **** ");
 break;
case 'v' :
    if (i==0)printf(" *  * ");
    if (i==1)printf(" *  * ");
    if (i==2)printf(" *  * ");
    if (i==3)printf(" * *  ");
    if (i==4)printf("  *   ");
 break;
case 'w' :
    if (i==0)printf(" *   * ");
    if (i==1)printf(" *   * ");
    if (i==2)printf(" *   * ");
    if (i==3)printf(" * * * ");
    if (i==4)printf(" *   * ");
 break;
case 'x' :
    if (i==0)printf(" *  * ");
    if (i==1)printf(" *  * ");
    if (i==2)printf("  **  ");
    if (i==3)printf(" *  * ");
    if (i==4)printf(" *  * ");
 break;
case 'y' :
    if (i==0)printf(" *  * ");
    if (i==1)printf(" *  * ");
    if (i==2)printf("  *   ");
    if (i==3)printf("  *   ");
    if (i==4)printf("  *   ");
 break;
case 'z' :
    if (i==0)printf(" **** ");
    if (i==1)printf("   *  ");
    if (i==2)printf("  *   ");
    if (i==3)printf(" *    ");
    if (i==4)printf(" **** ");
 break;
case ' ':
    if (i==0)printf("      ");
    if (i==1)printf("      ");
    if (i==2)printf("      ");
    if (i==3)printf("      ");
    if (i==4)printf("      ");
    break;
}
}

printf("\n");
}
}
