#include <stdio.h>


void insertionSort(int arr[], int n) {
    
    for (int i = 1; i < n; i++) {
        int key = arr[i];   
        int j = i - 1;      


        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; 
            j--;
        }
        arr[j + 1] = key; 
    }

}

int main() {
    
    int n;
    printf("\n Enter the numbers to be sorted :");
    scanf("%d",&n);
    int arr[n];

    printf("\n Enter Numbers one by one : \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Unsorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); 
    }

    insertionSort(arr, n); 

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); 
    }

    return 0;
}