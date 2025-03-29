#include <stdio.h>
int main(){
    int i,j,a,c;
    scanf("%d",&a);

    for(i=0;i<a;i++){
        c=1;
        for(j=0;j<=i;j++){
            printf("%d ",c);
            c++;
        }printf("\n");
    }

 return 0;
}