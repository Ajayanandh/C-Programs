#include<stdio.h>
int main(){
int n;
printf("Enter the number :");
scanf("%d",&n);
for(int i=1;i<=n;i++){
for(int j=1;j<i;j++){
printf(" ");

}

printf("%d",i);

printf("\n");
}
for(int i=1;i<=n;i++){
for(int j=i;j<n;j++){
printf(" ");

}

printf("%d",i);

printf("\n");
}
for(int i=1;i<=n;i++){
for(int j=1;j<i;j++){
printf(" ");

}

printf("%d",i);

printf("\n");
}
for(int i=1;i<=n;i++){
for(int j=i;j<n;j++){
printf(" ");

}
printf("%d",n-i+1);

printf("\n");
}
}
