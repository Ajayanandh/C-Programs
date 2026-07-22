#include<stdio.h>
int main(){
int n,a[100],count,visit[100];
printf("Enter the elements in the array :");
scanf("%d",&n);
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){

for(int j=0;j<i;j++){
if(a[i]==a[j]){count++;break;}
}

}
printf("no od duplicates %d\n",count);

}
