#include<stdio.h>
int main(){
int n,temp=0;
int a[100];
printf("Enter the size of the array : ");
scanf("%d",&n);
for(int i=0;i<n;i++){
        printf("Enter the number :");
scanf("%d",&a[i]);

}
printf("Ascening oder :\n");
for(int i=0;i<n;i++){
for(int j=i;j<n;j++){
if(a[i]>a[j]){
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;

}
}
}
for(int i=0;i<n;i++){
printf("%d",a[i]);
}
printf("\nDescending oder :\n");
for(int i=0;i<n;i++){
for(int j=i;j<n;j++){
if(a[i]<a[j]){
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;

}
}
}
for(int i=0;i<n;i++){
printf("%d",a[i]);
}

}

