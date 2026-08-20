#include<stdio.h>
#include<math.h>
int main(){
    int n,k,j,m,p;
    scanf("%d%d%d%d%d",&n,&k,&j,&m,&p);
    int be=m/k;
    int pe=p/j;
    int br=m%k;
    int pr=p%j;
    int e=br+pr;
     int leftm=be+pe;
if(e>0)leftm++;
if(e%k>=0||e%j>=0){
   leftm++;
}
   int t=0;
    t=n-leftm;
    printf("%d",t);
}