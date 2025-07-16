#include <stdio.h>
#include <stdlib.h>
// Function prototypes
void mergeSort(int arr[], int l, int r);
void merge(int arr[], int l, int m, int r);
void printArray(int A[], int size);
// Main function
int main() {
    int arr[] = {9,8,7,6,9,4,5,2,3,1,10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Given array: \n");
    printArray(arr, arr_size);
    
    mergeSort(arr, 0, arr_size - 1);
    
    printf("Sorted array: \n");
    printArray(arr, arr_size);
    
    return 0;
}
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;  // Fixed: was (r-1)/2

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}
// Function to print an array
void printArray(int A[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", A[i]);  // Fixed: added space after %d
    }
    printf("\n");
}
// Function to merge 
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    // Create temporary arrays
    int L[n1], R[n2];
    // Copy data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++) {
        L[i] = arr[l + i];  // Fixed: was arr[1+i]
    }
    for (j = 0; j < n2; j++) {
        R[j] = arr[m + 1 + j];
    }
    // Merge the temp arrays back into arr
    i = 0;
    j = 0;
    k = l;  // Fixed: was k = 1, should be k = l
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    // Copy remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    // Copy the remaining elements of R[], if there are any 
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}