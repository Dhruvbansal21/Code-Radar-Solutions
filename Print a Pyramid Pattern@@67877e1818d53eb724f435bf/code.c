#include <stdio.h>
int main(){
    int i,j,a;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=a;j>i;j--){
        printf("* ");
    }
    for(int k=1;k<(2*n-i);k++){
        printf("*");
    }
    printf("\n");
    }
    return 0;
}