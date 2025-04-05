#include<stdio.h>
int main(){
    int a,i,t=0,h=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<a;i++){
        if(arr[i] % 2 == 0){
            t+=1;
        }
        else{
            h+=1;
        }
    }
printf("%d %d",t,h);

    return 0;
}