#include <stdio.h>
int main() {
    int a;
scanf("%d",&a);
int arr[a];
for(int i=0;i<a;i++){
    scanf("%d",&arr[i]);

}

for(int i=0;i<a;i++){
    if(i==0 && arr[i] > arr[i+1]){
        printf("%d";arr[i]);
        break;
    }
   else if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
        printf("%d",arr[i]);
        break;
      
        }
}
    return 0;
}