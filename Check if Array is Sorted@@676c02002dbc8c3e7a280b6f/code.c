#include <stdio.h>
int main() {
    int a;
scanf("%d",&a);
int arr[a];
for(int i=0;i<a;i++){
    scanf("%d",&arr[i]);

}
int sort=1
for(int i=1;i<a;i++){
    if(arr[i]<arr[i-1]){
        sort=0;
        break;
        }
}
if(sort){
    printf("Sorted");
}
else{
printf("Not Sorted");}
    return 0;
}