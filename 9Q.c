#include<stdio.h> 
int main(){
    int n,new;
    printf("Enter an even number : ");
    scanf("%d",&n);
    switch(n&1){
        case 0:new=n+1;
        printf("the upper nearest odd number to %d is %d",n,new); 
        break;
        case 1:printf("You have not entered an even number");
        break;
    }
    return 0;
}
