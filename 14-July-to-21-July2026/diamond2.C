#include<stdio.h>
int main(){
int n;
printf("Enter the number :");
scanf("%d",&n);
for(int i=1;i<=n;i++){
for(int k=i;k<n;k++){
    printf(" ");
}
for(int j=1;j<=i;j++){
if(j==1)
        printf("*");
        else printf(" ");
}
for(int j=i-1;j>=1;j--){
if(j==1)
        printf("*");
        else printf(" ");
}

printf("\n");
}
for(int l=n-1;l>=1;l--){
    for(int j=1;j<=n-l;j++){
        printf(" ");
    }
    for(int k=1;k<=l;k++){
        if(k==1)
        printf("*");
        else printf(" ");

    }
    for(int a=l-1;a>=1;a--){
        if(a==1)
        printf("*");
        else printf(" ");
    }

printf("\n");
}
}
