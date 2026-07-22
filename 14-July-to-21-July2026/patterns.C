#include<stdio.h>
int main(){
int n;
printf("Enter the number :");
scanf("%d",&n);
for(int i=0;i<=n;i++){
for(int j=0;j<=i;j++){
printf("%c",'A'+i);
}
printf("\n");

}
for(int i=0;i<=n;i++){
for(int j=0;j<=i;j++){
printf("%c",'A'+j);
}
printf("\n");

}
for(int i=0;i<=n;i++){
for(int j=i;j<=n;j++){
printf(" ");

}
for(int j=i;j<i+1;j++){
    printf("%d",j+1);
}
printf("\n");

}
printf("Floyd triangle\n");
int a=1;
for(int i=0;i<=n;i++){
for(int j=1;j<=i;j++){
printf("%d ",a++);
}
printf("\n");

}
printf("Pascals triangle\n");

for(int i=0;i<n;i++){

    for(int j=1;j<n-i;j++){
        printf(" ");

    }
    int num=1;
    for(int j=0;j<=i;j++){


            printf("%d ",num);
     num=(num*(i-j))/(j+1);
     }

    printf("\n");
}







printf("\n");

for(int i=1;i<=n;i++){

    for(int j=1;j<=n-i;j++){
        printf(" ");

    };
int a=i;
    for(int j=1;j<=i;j++){

            printf("%d",a++);


        }
        for(int k=a-1;k>=i;k--){
                if(k==i)continue;
            printf("%d",k-1);
        }

    printf("\n");
}
}


