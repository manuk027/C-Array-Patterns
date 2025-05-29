#include<stdio.h>
int main(){
    int size, i, arr[100], min;
    printf("Enter the size of the array :");
    scanf("%d", &size);
    printf("Enter the elements : ");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    min=arr[0];
    for(i=1; i<size; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("The smallest value in the array is  : %d", min);
    return 0;
}
