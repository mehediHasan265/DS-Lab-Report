//Stack
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main() {
    int stack[MAX];
    int top = -1;
    int choice, value, i;

    while (1) {
        printf("\n 1. Push\n 2. Pop\n 3. Display\n 4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Push operation
                if (top == MAX - 1) {
                    printf("Stack overflow!\n");
                } else {
                    printf("Enter value to push: ");
                    scanf("%d", &value);
                    top++;
                    stack[top] = value;
                    printf("%d pushed to stack\n", value);
                }
                break;

            case 2:
                // Pop operation
                if (top == -1) {
                    printf("Stack underflow!\n");
                } else {
                    value = stack[top];
                    top--;
                    printf("Popped value: %d\n", value);
                }
                break;

            case 3:
                // Display operation
                if (top == -1) {
                    printf("Stack is empty!\n");
                } else {
                    printf("Stack elements are:\n");
                    for (i = top; i >= 0; i--) {
                        printf("%d\n", stack[i]);
                    }
                }
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

