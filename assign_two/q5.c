// Implementation of a simple queue

#include <stdio.h>

#define SIZE 5

int ARR[SIZE], front = -1, rear = -1;

void add_to_queue(int value) {
  if (rear == SIZE - 1)
    printf("\nQueue is Full!!");
  else {
    if (front == -1)
      front = 0;
    rear++;
    ARR[rear] = value;
    printf("\nInserted -> %d", value);
  }
}

void remove_from_Queue() {
  if (front == -1)
    printf("\nQueue is Empty!!");
  else {
    printf("\nDeleted : %d", ARR[front]);
    front++;
    if (front > rear)
      front = rear = -1;
  }
}

// Function to print the queue
void display() {
  if (rear == -1)
    printf("\nQueue is Empty!!!");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", ARR[i]);
  }
  printf("\n");
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

      printf("\nContents of the queue are: \n");
      display();
   }
  return 0;
}

