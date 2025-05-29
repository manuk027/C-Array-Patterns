#include<stdio.h>
int main(){
    int i, size, arr[100], sum=0;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Enter numbers : ");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    printf("Sum of numbers is %d", sum);
    return 0;
}
