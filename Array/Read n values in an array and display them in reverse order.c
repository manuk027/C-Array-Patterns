#include<stdio.h>
int main(){
    int size, i, arr[100];
    printf("Enter the size of array : ");
    scanf("%d", &size);
    printf("Enter numbers : ");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("The array in reverse order is : ");
    for(i=size-1; i>=0; i--){
        printf("%d\t", arr[i]);
    }
    return 0;
}
