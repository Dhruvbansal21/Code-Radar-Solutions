#include <stdio.h>
int main(){
    int i,j,a;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=a;j>i;j--){
        printf("*");
    }
    printf("\n");
    }
    return 0;
}