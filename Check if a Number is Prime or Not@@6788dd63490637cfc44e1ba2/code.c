#include <stdio.h>

int main() {
    int a,i;
    i=2;
    scanf("%d",&a);
    if(a<=1){
    printf("Not Prime");}
    else{
    while(i<a){
        if(a%i==0){
        printf("Not Prime");
        break;
        }
        i++
        }
        if(i==a){
        printf("Prime");}
        }
    return 0;
}