#include<stdio.h>
int main(){
    int n;
    printf("Enter any number : ");
    scanf("%d",&n);
    switch(n>0){          
        case 1:n=n-2*n;
            printf("%d",n);
            break;
        case 0:n=n-2*n;
            printf("%d",n);
            break;
    }
    return 0;
}
