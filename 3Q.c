#include<stdio.h>
int main(){
    int d;
    printf("Enter the day number of the week : ");
    scanf("%d",&d);
    switch(d){
        case 1:
        printf("May your day flourish with joy ");
        break;
        case 2:
        printf("A very happy day ");
        break;
        case 3:
        printf("May you have a very good day ahead ");
        break;
        case 4:
        printf("All the best for the day may you succeed in your works ");
        break;
        case 5:
        printf("May your day be full of energy ");
        break;
        case 6:
        printf("May you have a victorious day today ");
        break;
        case 7:
        printf("May your day be filled with happiness ");
        break;
    }
    return 0;
}
