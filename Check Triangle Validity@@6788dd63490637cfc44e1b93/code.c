#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=a+b;
    if(d>c)
    printf("Valid");
    else 
    printf("Invalid");
    return 0;
}