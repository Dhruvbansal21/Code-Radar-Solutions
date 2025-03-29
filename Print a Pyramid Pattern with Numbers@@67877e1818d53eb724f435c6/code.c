#include <stdio.h>
int main(){
    int i,j,a;
    scanf("%d",&a);
    for(i=0;i<a;i++){
       for(j=1;j<a-i-1;j++){
        printf(" ");
       }
       for(j=1;j<i+2;j++){
        printf("%d ",j);
       }
        printf("\n");
    }
  
    return 0;
}