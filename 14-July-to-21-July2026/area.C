#include<stdio.h>
#include<conio.h>
int main(){
int choice,a,r,l,b;
int n=1;

do{
     printf("\n1)Square\n2)Circle\n3)Triangle4)Rectangle\n5)Exit\nENter your choice:");
     scanf("%d",&choice);
int area=0;
switch(choice){
case 1:
       printf("Square :Enter the side :");
       scanf("%d",&a);
       area=a*a;
       printf("Area is :%d",area);break;
case 2:
    printf("Circle :Enter the radius :");
       scanf("%d",&r);
       area=3.14*r*r;
       printf("Area is :%d",area);break;
case 3:
       printf("triangle :Enter the length&breath :");
       scanf("%d%d",&l,&b);
       area=0.5*l*b;
       printf("Area is :%d",area);break;
case 4:
       printf("Rectangle :Enter the length&breath :");
       scanf("%d%d",&l,&b);
       area=l*b;
       printf("Area is :%d",area);break;

case 5:
     printf("Exiting the case");
     n=0;break;

default:
     printf("Invalid choice");

    }
}while(n==1);


    return 0;
    }
