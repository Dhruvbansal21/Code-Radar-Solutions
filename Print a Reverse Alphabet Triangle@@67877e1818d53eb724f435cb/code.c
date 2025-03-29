#include <stdio.h>
int main(){
    int i,j,a,c;
    scanf("%d",&a);

    for(i=0;i<a;i++){
        c='A';
        for(j=0;j<a-i;j++){
            printf("%c ",c);
            c++;
        }printf("\n");
    }

 return 0;
}