#include<stdio.h>
int leap(int);
    int main(){
        int m,y,x;
        printf("Enter the month number : ");
        scanf("%d",&m);
        switch(m){
            case 1:printf("this month has 31 days");
            break;
            case 2:printf("Enter the year : ");
                   scanf("%d",&y);
                   x=leap(y);
                   if(x){
                    printf("the month has 29 days");
                   }
                   else{
                    printf("the month has 28 days");
                   }
            break;
            case 3:printf("this month has 31 days");
            break;
            case 4:printf("this month has 30 days");
            break;
            case 5:printf("this month has 31 days");
            break;
            case 6:printf("this month has 30 days");
            break;
            case 7:printf("this month has 31 days");
            break;
            case 8:printf("this month has 31 days");
            break;
            case 9:printf("this month has 30 days");
            break;
            case 10:printf("this month has 31 days");
            break;
            case 11:printf("this month has 30 days");
            break;
            case 12:printf("this month has 31 days");
            break;
        }
        return 0;
    }
    int leap(int y){
        if(y%400==0){
            return 1;
        }
        else if(y%100==0){
            return 0; 
        }
        else if(y%4==0){
            return 1;
        }
        else{
            return 0;
        }
    }
