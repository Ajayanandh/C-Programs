#include<stdio.h>
int main()
{
    int n,a[100],temp=0
                      ;
    printf("Enter the elements in the array :");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0,j=n-1; j>i; i++,j--)
    {

        temp=a[j];
        a[j]=a[i];
        a[i]=temp;


    }
    for(int h=0; h<n; h++)
    {
        printf("%d",a[h]);
    }
}
