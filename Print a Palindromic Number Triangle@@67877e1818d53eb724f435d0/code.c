#include <stdio.h>
int main(){
    int i,j,a,c;
    scanf("%d",&a);

    for(i=0;i<a;i++){
    for(j=0;j<a-i-1;j++){
        printf(" ");
    }
    for(j=1;j<=i+1;j++){
        printf("%d",j);
    }    
    for(j=a-1;j>0;j--)
     {
        printf("%d",j);
     }   
        
        printf("\n");
    }

 return 0;
}