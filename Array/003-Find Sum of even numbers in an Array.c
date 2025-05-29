#include<stdio.h>
int main(){
    int i, sum=0, arr[100], size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Enter numbers : ");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
        if(arr[i]%2==0){
            sum+=arr[i];
        }
    }
    printf("The sum of even numbers is %d", sum);
    return 0;
}
