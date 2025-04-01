#include<stdio.h>
int main(){
    int a,i,t;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",arr[i]);
    }

for(i=0;i<a-1;i++){
    for(int j=0;j<a-i-1;j++){
        if(arr[i]>arr[i+1]){
            t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;
       }
    }
}
printf("%d %d",arr[0],arr[a-1]);






    return 0;
}