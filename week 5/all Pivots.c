#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int hoarePartition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low - 1;
    int j = high + 1;
    while (1) {
        do {
            i++;
        } while (arr[i] < pivot);
        do {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
            return j;
        swap(&arr[i], &arr[j]);
    }
}
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int p = hoarePartition(arr, low, high);
        quickSort(arr, low, p);
        quickSort(arr, p + 1, high);
    }
}
void choosePivot(int arr[], int low, int high, int choice) {
    int pivotIndex;
    if (choice == 1) {
        return;
    }
    else if (choice == 2) {
        swap(&arr[low], &arr[high]);
    }
    else if (choice == 3) {
        pivotIndex = low + rand() % (high - low + 1);
        swap(&arr[low], &arr[pivotIndex]);
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main() {
    int arr[] = {157,110,147,122,111,149,151,141,123,112,117,133};
    int n = sizeof(arr) / sizeof(arr[0]);
    int choice;
    srand(time(NULL));
    printf("Choose Pivot:\n");
    printf("1. First Element\n");
    printf("2. Last Element\n");
    printf("3. Random Element\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    choosePivot(arr, 0, n - 1, choice);
    quickSort(arr, 0, n - 1);
    printf("Sorted Array:\n");
    printArray(arr, n);
    return 0;
}