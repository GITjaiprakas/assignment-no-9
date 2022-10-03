#include<stdio.h>
int main(){
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);
    switch(year%100==0){
        case 1:switch(year%400==0){
                   case 1:printf("the year is a leap year");
                          break;
                   case 0:printf("the year is a non leap year");
                          break;
               } break;
        case 0:switch(year%4==0){
                   case 1:printf("the year is a leap year");
                          break;
                   case 0:printf("the year is a non leap year");
                          break;
               }break;
    }
    return 0;
}
