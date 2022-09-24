#include <stdio.h>

int linear_search(int arr[], int size, int target){
    int i;
    for(i = 1; i < size; i++){
        if(arr[i] == target) return i;
    }
    return -1;
}

int recursive_linear_search(int arr[], int index, int target){
    if(index < 0) return -1;
    if(arr[index] == target) return index;

    return recursive_linear_search(arr, index - 1, target);
}

void main(){
    int arr[] = {1,3,5,6,7,8,10};
    int size = sizeof(arr) / sizeof(arr[0]); // Size, Size != Index
    int target = 7;
    //printf("The index of %d is %d", target, linear_search(arr, size, target));
    printf("The index of %d is %d", target, recursive_linear_search(arr, size - 1, target));
}
