// Implementation of a circular queue

#include <stdio.h>

#define SIZE 5

int ARR[SIZE];
int front = -1, rear = -1;

// To ADD an element
void add_to_queue(int element) {
  if ((front == rear + 1) || (front == 0 && rear == SIZE - 1))
    printf("\n Queue is full!! \n");
  else {
    if (front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    ARR[rear] = element;
    printf("\nInserted -> %d", element);
  }
}


// To delete an element
int remove_from_Queue() {
  int element;
  if (front == -1) {
    printf("\nQueue is empty !! \n");
    return (-1);
  } else {
    element = ARR[front];
    if (front == rear) {
      front = -1;
      rear = -1;
    } 
    // Q has only one element, so we reset the queue after dequeing it
    else {
      front = (front + 1) % SIZE;
    }
    printf("\nDeleted element -> %d \n", element);
    return (element);
  }
}


// Display the queue
void display() {
  int i;
  if (front == -1)
    printf("\n Empty Queue\n");
  else {
    printf("\nposition of Front -> %d ", front);
    printf("\nCircular Queue elements -> ");
    for (i = front; i != rear; i = (i + 1) % SIZE) {
      printf("%d ", ARR[i]);
    }
    printf("%d ", ARR[i]);
    printf("\nposition of Rear -> %d \n", rear);
  }
}

int main() {
   int n, d;
   while(1) {
      printf("\nPress 1 to add and element, 0 to remove an element \n");
      scanf(" %d", &n);
         if(n) {
            printf("\nEnter the element you wish to add to the queue \n");
            scanf(" %d", &d);
            add_to_queue(d);
   }
         else {
            remove_from_Queue();
   }

   printf("\nCreated Circular Queue: \n");
   display();
   }
  return 0;
}
