#include<stdio.h>
int main(){
int n,a[100],p,e,temp=0;
printf("Enter the size of the array :");
scanf("%d",&n);
for(int i=0;i<n;i++){
printf("Enter the sorted array :");
scanf("%d",&a[i]);
}
printf("Enter the element to insert :");
scanf("%d",&e);

for(int i=0;i<n;i++){
if(e>a[i]){p++;
}
}

for(int i=p;i<=n;i++){

}

for(int i=0;i<n+1;i++){
    printf("%d ",a[i]);
}
}
