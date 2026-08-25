#include<stdio.h>
int main(){
    int arr[2];
    arr[0]=1;
    printf("%d",arr[0]);
    arr[1]=2;
    printf("%d",arr[1]);

    printf("%d",sizeof(arr));
    return 0;
}