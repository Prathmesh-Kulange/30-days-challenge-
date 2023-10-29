//program for addition of two numbers without using third variable
#include<stdio.h>
void addition()
{
    int a,b;
    printf("enter first number:-");
    scanf("%d",&a);
    printf("enter second number:-");
    scanf("%d",&b);
    printf("addition is:-%d",a+b);
}
int main(){
    addition();
    return 0;
}
