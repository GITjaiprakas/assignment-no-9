#include<stdio.h>
int main(){
    int x;
    int a,b,c;
    while(1){
        printf("\nEnter your choice : ");
        printf("\n1. Check whether a given set of three numbers are lengths of an isosceles triangle or not");
        printf("\n2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not");
        printf("\n3. Check whether a given set of three numbers are lengths of an equilateral triangle or not");
        printf("\n4. Exit\n");
        scanf("%d",&x);
        if(x<4){
            printf("Enter the set of three numbers : \n");
            scanf("%d %d %d",&a,&b,&c);
        }
        switch(x){
            case 1:
                if(a==b||a==c||b==c){
                    printf("the given set of three numbers are the lengths of an isosceles triangle\n");
                }
                else{
                    printf("the given set of three numbers are not the lengths of an isosceles triangle\n");
                }
                break;
            case 2:
                if(a*a+b*b==c*c||c*c+b*b==a*a||a*a+c*c==b*b){
                    printf("the given set of three numbers are the lengths of a right angled triangle\n");
                }
                else{
                    printf("the given set of three numbers are not the lengths of an right angled triangle\n");
                }
                break;
            case 3:
                if(a==b&&c==a){
                    printf("the given set of three numbers are the lengths of an equilateral triangle\n");
                }
                else{
                    printf("the given set of three numbers are not the lengths of an equilateral triangle\n");
                }
                break;
            case 4:
                break;
            default : printf(" invalid");
        }
        if(x==4){
            break;
        }
    }
    return 0;
}
