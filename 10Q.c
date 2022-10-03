#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the value of constants a, b and c : ");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-4*a*c;
    switch(d>0){
        case 1:switch(a==0){
            case 1:printf("The equation is not a quadriatic equation");
            break;
            case 0:printf("The nature of roots are real and distincts");
            break;
            }break;
        case 0:switch(d==0){
                   case 1:printf("The nature of roots are real and equal");
                   break;
                   case 0:switch(d<0){
                              case 1:printf("The nature of the roots are imaginary");
                              break;
                            }break;
                }break;
    }
    return 0;
}
