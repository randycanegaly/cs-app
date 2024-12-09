#include <stdio.h>

void reverse_array(int [], int);
void inplace_swap(int *, int *);
void printArray(int arr[], int size);

int main(void) {
    int array1[] = {1, 2, 3, 4};
    int array2[] = {1, 2, 3, 4, 5};

    reverse_array(array1, 4);
    reverse_array(array2, 5);

    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    
    printArray(array1, size1);
    printArray(array2, size2);
}

void reverse_array(int a[], int cnt) {
    int first, last;
    for (first = 0, last = cnt - 1; first < last; first++, last--)
        inplace_swap(&a[first], &a[last]);
}

void inplace_swap(int *x, int *y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void printArray(int arr[], int size) {
    printf("Array elements: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
