#include <stdio.h>

void printUniqueElements(int arr[], int size) { 
printf("Unique elements in the array: ");

    for (int i = 0; i < size; i++) {
        int isUnique = 1;

        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }

        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
}

int main() { // Main function
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]); 
    }

    printUniqueElements(array, size); 

    return 0;
}