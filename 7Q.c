#include<stdio.h>
int main(){
    float units; 
    printf("Enter how much electricity units you have used : ");
    scanf("%f",&units);
    switch(units<=50){
        case 1:printf("%.2f",units*0.50+20*units*0.50/100);
        break;
        case 0:switch(units<=150){
                   case 1:printf("%.2f",units*0.75+(20*units*0.75/100));
                   break;
                   case 0:switch(units<=250){
                              case 1:printf("%.2f",units*1.20+(20*units*1.20/100));
                              break;
                              case 0:switch(units>250){
                                         case 1:printf("%.2f",units*1.50+(20*units*1.50/100));
                                         break;
                              }break;
                   }break;
               }break;        
        default:printf("Invalid");                                         
    }
    return 0;
}
