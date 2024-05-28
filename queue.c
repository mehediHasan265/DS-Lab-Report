//Queue
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main() {
    int queue[MAX];
    int front = -1, rear = -1;
    int choice, value, i;

    while (1) {
        printf("\n 1. Enqueue\n 2. Dequeue\n 3. Display\n 4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Enqueue operation
                if (rear == MAX - 1) {
                    printf("Queue overflow!\n");
                } else {
                    if (front == -1) {
                        front = 0;
                    }
                    printf("Enter value to enqueue: ");
                    scanf("%d", &value);
                    rear++;
                    queue[rear] = value;
                    printf("%d enqueued to queue\n", value);
                }
                break;

            case 2:
                // Dequeue operation
                if (front == -1 || front > rear) {
                    printf("Queue underflow!\n");
                } else {
                    value = queue[front];
                    front++;
                    if (front > rear) {
                        front = rear = -1;
                    }
                    printf("Dequeued value: %d\n", value);
                }
                break;

            case 3:
                // Display operation
                if (front == -1) {
                    printf("Queue is empty!\n");
                } else {
                    printf("Queue elements are:\n");
                    for (i = front; i <= rear; i++) {
                        printf("%d ", queue[i]);
                    }
                    printf("\n");
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

