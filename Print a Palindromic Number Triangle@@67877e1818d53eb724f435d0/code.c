#include<stdio.h>
void main(){
    int N;
    scanf("%d",&N);
    for(int i=N-1;i<=N;i--){
        for(int j=1;j<N-i;j++)
        printf(" ");
    for(int k=1;k<=N;k++){
        printf("%d", k);
    }
    printf("\n");
    }    
}