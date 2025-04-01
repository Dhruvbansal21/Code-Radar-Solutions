#include<stdio.h>
int main(){
    int a,i,t;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }

for(i=0;i<a-1;i++){
    for(int j=0;j<a-i-1;j++){
        if(arr[j]>arr[j+1]){
            t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
       }
    }
}
printf("%d %d",arr[0],arr[a-1]);






    return 0;
}