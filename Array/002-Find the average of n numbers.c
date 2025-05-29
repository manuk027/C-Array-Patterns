#include<stdio.h>
int main(){
    int i, sum=0, arr[100], size;
    float avg;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Enter numbers : ");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    avg=(float)sum/size;
    printf("The avg of numbers is %lf", avg);
    return 0;
}
