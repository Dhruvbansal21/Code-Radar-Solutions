#include <stdio.h>
int main(){
    int i,j,a,c=1;
    scanf("%d",&a);

    for(i=0;i<a;i++){
      
        for(j=0;j<=i;j++){
            printf("%d ",c);
            c++;
        }printf("\n");
    }

 return 0;
}