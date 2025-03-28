#include <stdio.h>
int main(){
    int i,j,a,k,g;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=0;j<a-i-1;j++){
            printf(" ");
        }
        for(j=0;j<i+1;j++){
            printf("*");
        }
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(k=0;k<a-1;k++){
        for(g=0;g<a-k;g++){
            printf(" ");
        }
        // for(g=0;)
    }














 return 0;
}