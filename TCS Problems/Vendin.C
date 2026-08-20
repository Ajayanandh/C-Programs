#include<stdio.h>
int main(){
    
    printf("Coffee\nTea\nSoups\nBeverages\n");
    printf("Enter your  choice");
    int choice,a;
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("1.	Espresso Coffee\n 2.Cappuccino Coffee\n 3.Latte Coffee\n ");
                printf("Enter your choice:");
                scanf("%d",&a);
                switch(a){
                    case 1:
                       printf("	Espresso Coffee\n");break;
                    case 2:
                       printf("	CappuccinoCoffee\n");break;
                    case 3:
                       printf("	EsLatte Coffee\n");break;
                }
        break;
        case 2:
        printf("1.Plain Tea\n2.Assam Tea\n 3.Ginger Tea\n 4.Cardamom Tea\n5.Masala Tea\n 6.	Lemon Tea\n 7.Green Tea\n8.Organic Darjeeling Tea\n");
                printf("Enter your choice :");
                scanf("%d",&a);
                switch(a){

                }
       
               
               
                
               
               
                

    
    
    }
}