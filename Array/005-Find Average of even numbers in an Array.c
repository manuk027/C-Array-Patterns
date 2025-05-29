#include<stdio.h>
int main(){
    int i, size, arr[100], sum=0, count=0;
    float avg;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Enter numbers : ");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
        if(arr[i]%2==0){
            sum+=arr[i];
            count++;
        }
    }
    avg=(float)sum/count;
    printf("Average of even numbers : %lf", avg);
    return 0;
}
