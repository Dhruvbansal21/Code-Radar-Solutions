#include <stdio.h>
int main(){
    int a,b;
    b=a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<b;j--)
        printf(" ");
for(int j=1;j<=i;j++){

printf("%d",j);
}
printf("\n");
    }
    return 0;

}
