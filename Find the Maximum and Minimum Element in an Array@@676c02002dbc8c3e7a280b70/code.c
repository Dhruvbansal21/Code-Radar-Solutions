#include<stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
        scanf("%d",arr[i]);
    }
int t;
for(i=0;i<a-1;i++){
    for(int j=0;j<a-i-1;j++){
        if(a[i]>a[i+1]){
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
       }
    }
}







    return 0;
}