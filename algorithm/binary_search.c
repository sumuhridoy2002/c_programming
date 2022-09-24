#include <stdio.h>

int binary_search(int arr[], int l, int h, int target){
    int mid;
    while(l <= h){
        mid = (l + h) / 2;
        if(arr[mid] == target) return mid;
        else if(target < arr[mid]) h = mid - 1;
        else l = mid + 1;
    }
}

int recursive_binary_search(int arr[], int l, int h, int target){
    int mid;
        mid = (l + h) / 2;
        if(arr[mid] == target) return mid;
        else if(target < arr[mid]) return recursive_binary_search(arr, l, mid - 1, target);
        else return recursive_binary_search(arr, mid + 1, h, target);
}

void main(){
    int arr[] = {1,3,5,6,7,8,10};
    int lower = 0; // Index
    int higher = sizeof(arr) / sizeof(arr[0]); // Size, Size != Index
    int target = 8;
    //printf("The index of %d is %d", target, binary_search(arr, lower, higher - 1, target));
    printf("The index of %d is %d", target, recursive_binary_search(arr, lower, higher - 1, target));
}
