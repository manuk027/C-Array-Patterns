// Copy the element of one array to another

#include<stdio.h>
int main(){
    int i, arr[100], odd[100], even[100], size, e=0, o=0;
    printf("Enter the size : ");
    scanf("%d", &size);
    printf("Enter %d elements : ", size);
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
        if(arr[i]%2==0){
            even[e]=arr[i];
            e++;
        } else {
            odd[o]=arr[i];
            o++;
        }
    }
    printf("Array of even numbers : ");
    for(i=0; i<e; i++){
        printf("%d\t", even[i]);
    }
    printf("\nArray of odd numbers : ");
    for(i=0; i<o; i++){
        printf("%d\t", odd[i]);
    }
    
}
