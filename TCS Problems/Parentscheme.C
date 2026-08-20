#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char p[100];
    char a;
    int amt=5000;
    int pm=0,chm=0;
    char name[4][10];
    scanf("%s",p);
    scanf(" %c",&a);
   char child[100];
   int i=0;
    if(a=='y'){
        chm=0.05*5000;
        pm=0.1*5000;
        scanf("%s",child);
       char *tok=strtok(child,",");
       while(tok!=NULL&&i<4){
           strcpy(name[i],tok);
           i++;
           tok=strtok(NULL,",");
       }
       printf("%s : %d\n",p,pm);
     for(int j=0;j<i;j++){
        printf("%s : %d\nle",name[j],chm);
     }
    
    }
  else{
        pm=0.05*5000;
        printf("%s : %d",p,pm);
    }
  
}