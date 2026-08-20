#include<stdio.h>
#include<string.h>
#include<Math.h>
float getFare(char source[], char des[]){
int path[8]={800,600,750,900,1400,1200,1100,1500};
char BusStop[][3]={"TH","GA","IC","HA","TE","LU","NI","CA"};
int si=0,di;
for(int i=0;i<8;i++){
   if(strcmp(source,BusStop[i])==0){si=i;break;}
}
for(int i=0;i<8;i++){
   if(strcmp(des,BusStop[i])==0){di=i;break;}
}
if(si==0||di==0)return 0;
int d=0;
int i=si;
    while(strcmp(des,BusStop[i])!=0){
        if(i<8){  printf("%d\n",d);
        d=d+path[i];
        i++;
        }
        if(i>=8){
            i=0;
        }
       
    }
    float fare =((float)d/1000)*5;

return fare;
}
int main(){
   char source[100];
   char des[100];
   printf("Enter the source and destination:");
   scanf("%s%s",source,des);
  
   
  float fa= getFare(source,des);
  printf("%f",round(fa));
}