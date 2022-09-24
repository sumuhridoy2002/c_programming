#include <stdio.h>

void print_array(int arr[], int size){
    int i;
    for(i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

void main(){
    int arr[] = {8,6,4,3,1,4,5,10};
    int size = sizeof(arr) / sizeof(arr[0]);

    /* BUBBLE SORT ALGORITHM */
    int i, j, temp;

    /* Should access (size - 1) times to access & take every index's values */
    for(i = 0; i < size - 1; i++){
        /* Should access (size - i - 1) times to access & compare every index's values */
        for(j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    /* Print the sorted array */
    print_array(arr, size);
}
