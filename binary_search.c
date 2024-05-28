// Binary search
#include <stdio.h>

int main() {
    int n, i, search, first, last, middle;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter %d integers (in sorted order): \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    //search for
    printf("Enter value to find: ");
    scanf("%d", &search);

    first = 0;
    last = n - 1;
    middle = (first + last) / 2;

    // Binary search algorithm
    while (first <= last) {
        if (array[middle] < search) {
            first = middle + 1;
        } else if (array[middle] == search) {
            printf("%d found at location %d.\n", search, middle + 1);
            break;
        } else {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }
    if (first > last) {
        printf("Not found! %d is not present in the list.\n", search);
    }
    return 0;
}

