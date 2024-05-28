//insertion sort
#include <stdio.h>

int main() {
    int n, i, j, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter %d integers: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    // Insertion sort algorithm
    for (i = 1; i < n; i++) {
        key = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }

    // Print the sorted array
    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

