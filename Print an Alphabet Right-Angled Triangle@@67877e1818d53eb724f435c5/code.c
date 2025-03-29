// Your code here...#include <stdio.h>
int main(){
    int i,j,a,c='A';
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=0;j<=i;j++){
            printf("%c",c);
            c++;
        }
    }

 return 0;
}