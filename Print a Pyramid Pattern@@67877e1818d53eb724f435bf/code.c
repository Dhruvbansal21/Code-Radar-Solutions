#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=n;j>i;j--){
        printf(" ");
    }
    for(int k=1;k<(2*n-i);k++){
        printf("*");
    }
    printf("\n");
    }
    return 0;
}