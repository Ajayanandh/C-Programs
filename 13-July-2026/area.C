#include<stdio.h>
#include<conio.h>
int main(){
int choice,a,r,l,b,area;
printf("1)Square\n 2)Circle\n 3)Triangle 4)Rectangle \n ENter your choice:");
scanf("%d",&choice);
switch(choice){
case 1:
       printf("Square :Enter the side :");
       scanf("%d",&a);
       area=a*a;break;
case 2:
    printf("Circle :Enter the radius :");
       scanf("%d",&r);
       area=3.14*r*r;break;
case 3:
       printf("triangle :Enter the length&breath :");
       scanf("%d%d",&l,&b);
       area=0.5*l*b;break;
case 4:
       printf("Rectangle :Enter the length&breath :");
       scanf("%d%d",&l,&b);
       area=l*b;break;

default:
     printf("Invalid choice");

    }
    printf("Area is :%d",area);
    getch();
    return 0;
    }
