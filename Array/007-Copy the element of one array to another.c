#include<stdio.h>
int main(){
    int i, arr[100], arr2[100], size;
    printf("Enter the size : ");
    scanf("%d", &size);
    printf("Enter %d elements : ", size);
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
        arr2[i]=arr[i];
    }
    printf("Copied array is : ");
    for(i=0; i<size; i++){
        printf("%d\t", arr2[i]);
    }
}
