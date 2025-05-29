#include<stdio.h>
int main(){
    int size, i, arr[100], max;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    
    printf("Enter elements : ");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    max=arr[0];
    for(i=1; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("\nLargest element in the array is : %d", max);
    return 0;
}
