#include <stdio.h>

#define QUEUE_SIZE 10

int queue[QUEUE_SIZE];
int front = 0;
int tail = 0;
int length = 0;

void enqueue(const int item) {
    if (length == QUEUE_SIZE) {
        printf("Queue is full\n");
        return;
    }
    queue[front + length] = item;
    length++;
}

int dequeue() {
    if (length == 0) {
        printf("Queue is empty\n");
        return -1;
    }
    const int temp = queue[front];
    queue[front] = 0;
    front++;
    length--;
    return temp;
}

void peek() {
    if (length == 0) {
        printf("Queue is empty\n");
        return;
    }
    printf("peek [%d] \n", queue[front]);
}

void showQueue() {
    for (int i = front; i < tail; i++) {
        printf("[%d] -> ", queue[i]);
    }
    printf("\n");
}

void main(void)
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    showQueue();
    dequeue();
    dequeue();
    dequeue();
    showQueue();
    peek();
    dequeue();
    showQueue();
}
