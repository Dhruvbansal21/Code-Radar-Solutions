#include <stdio.h>
int main(){
    int i,j,a;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=0;a<j;j++){
            printf(" ");
        }
        for(j=0;i>j;j++){
          printf("*");

        }printf("\n");
    }return 0;
}