#include<stdio.h>
#include<conio.h>
int main(){
int n;
printf("Enter the number :");
scanf("%d",&n);

for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
printf("%d",j);
}
printf("\n");
}
printf("\n");
for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
printf("%d",i);
}
printf("\n");
}

printf("\n");
for(int i=1;i<=n;i++){
for(int j=1;j<=i;j++){
printf("*");
}
printf("\n");
}
printf("\n");
for(int i=1;i<=n;i++){
for(int k=i;k<n;k++){
    printf(" ");
}
for(int j=1;j<=i;j++){
printf("*");
}
printf("\n");
}
printf("\n");
for(int i=1;i<=n;i++){
for(int k=i;k<n;k++){
    printf(" ");
}
for(int j=1;j<=i;j++){
printf("*");
}
for(int j=1;j<i;j++){
printf("*");
}
printf("\n");
}
for(int i=1;i<=n;i++){
for(int k=i;k<n;k++){
    printf(" ");
}
for(int j=1;j<=i;j++){
printf("%d",j);
}
for(int j=i-1;j>=1;j--){
printf("%d",j);
}
printf("\n");
}

}
