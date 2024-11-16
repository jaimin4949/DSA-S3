#include<stdio.h>
int main(){
    int a,b,c,d,e,f;
    printf("Enter A 5 Digit Number - ");
    scanf("%d",&a);
    f = a / 10000;
    b = a / 1000 % 10;
    c = a / 100 % 10;
    d = a / 10 % 10;
    e = a % 10;
    printf("%d %d %d %d %d ",f,b,c,d,e);
    return 0;
}