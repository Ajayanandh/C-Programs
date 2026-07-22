#include<stdio.h>
int main(){
int n,a[100],small=0,s=0;
printf("Enter the elements in the array :");
scanf("%d",&n);
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){

if(a[j]<a[i])small=a[j];
}
}
for(int i=0;i<n;i++){

for(int j=0;j<n;j++){

if(a[j]<a[i]&&a[j]!=small)s=a[j];
}

}
printf("%d",s);
}
