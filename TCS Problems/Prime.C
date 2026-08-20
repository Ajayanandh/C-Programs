#include<stdio.h>
void isPrime();
int n;
int main(){
    scanf("%d",&n);
    if(n>0)isPrime();
    else printf("Negative %d",n);
}

void isPrime(){
    int is=0;
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            is=1;
        }
    }
    if(is==0)
    {
        printf("Positive Prime number ");
    }
    else{
        printf("Positive Not prime");
    }
}


