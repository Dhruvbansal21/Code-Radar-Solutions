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
   
    for(i=1;i<a;i++){
        for(j=0;j<i;j++){
            printf(" ");
            }
        for(j=1;j<a;j++){
            printf("*");
        }
    //    for(j=1;j<a-1;j++){
    //         printf("*");
    //     }
        printf("\n");
    }


 return 0;
}
