#include <stdio.h>

int countDuplicates(int arr[], int size) { 
int count = 0;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break; 
            }
        }
    }

    return count;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]); 
    }

    int duplicateCount = countDuplicates(array, size); // calling function
    printf("Total number of duplicate elements: %d\n", duplicateCount); 

    return 0;
}
