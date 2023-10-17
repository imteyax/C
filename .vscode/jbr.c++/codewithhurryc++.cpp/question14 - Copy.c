// write a program to implement linear search ?
#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {10, 25, 30, 45, 50, 60, 70};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key, result;

    printf("Enter the element you want to search: ");
    scanf("%d", &key);

    result = linearSearch(arr, size, key);

    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}