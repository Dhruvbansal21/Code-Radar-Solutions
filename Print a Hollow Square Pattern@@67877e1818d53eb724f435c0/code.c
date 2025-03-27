#include <stdio.h>
int main(){
    int i,j,a;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        for(j=0;j<a;j++){
            if(j==0 || a==j+1 || i==0 || a==i-1){
            printf("*");}
            else{
            printf(" ");}

        }printf("\n");
    }return 0;
}