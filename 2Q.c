#include<stdio.h>
int main(){
    int a,b,x;
    while(1){
        printf("1.Addition");
        printf("\n2.Subtraction");
        printf("\n3.Multiplication");
        printf("\n4.Division");
        printf("\n5.Exit");
        printf("\n\nEnter your choice \n");
        scanf("%d",&x);
        switch(x){
            case 1:
                printf("Enter two numbers \n");
                scanf("%d%d",&a,&b);
                printf("Sum is %d\n\n",a+b);
                break;
            case 2:
                printf("Enter two numbers \n");
                scanf("%d%d",&a,&b);
                printf("Difference is %d\n\n",a-b);
                break;
            case 3:
                printf("Enter two numbers \n");
                scanf("%d%d",&a,&b);
                printf("Product is %d\n\n",a*b);
                break;
            case 4:
                printf("Enter two numbers \n");
                scanf("%d%d",&a,&b);
                printf("Division is %d\n\n",a/b);
                break;
            case 5:
                break;
        }
        if(x==5){
            break;
        }
    }
    return 0;
}
