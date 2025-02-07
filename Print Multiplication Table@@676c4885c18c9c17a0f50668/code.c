#include <stdio.h>
int main() {
    int a,i,t;
    i=1;
    t=1;
    scanf("%d",&a);
    while(i<=10){
        t=a*i;
        printf("2 x ");
        printf("%d",i);
        printf(" = ");
        printf("%d\n",t);
        i++;
    }
    
    
    return 0;
}