#include <stdio.h>
int main(){
    // int i,j,a,k,g;
    // scanf("%d",&a);
    // for(i=0;i<a;i++){
    //     for(j=0;j<a-i-1;j++){
    //         printf(" ");
    //     }
    //     for(j=0;j<i+1;j++){
    //         printf("*");
    //     }
    //     for(j=0;j<i;j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // for(k=0;k<a-1;k++){
    //     for(g=0;g<a-k-1;g++){
    //         printf(" ");
    //     }
    //     for(g=0;g<)
    // }


int n;
scanf("%d", &n);
for(int i=0; i<n; i++) {
    for(int j=0; j<n-i; j++) {
        printf(" ");
    }
    for(int k=1; k=2*i-1; k++){
        printf("*");
    }
    printf("\n");
    }
for(int i=n-1; i<1; i--) {
    for(int j=1; j<n-i; j++) {
        printf(" ");
    }
    for(int k=1; k=2*i-1; k++){
        printf("*");
    }
    printf("\n");
    }
 return 0;
}
