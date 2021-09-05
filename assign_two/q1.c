// Implementation of full descending stack

#include <stdio.h>

int MAXSIZE = 8;       
int stack[8];     
int top = 8;            

int Pop() {

   int data;
	
   if(!(top == MAXSIZE)) {
      data = stack[top];
      top = top+1;   
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}

int Push(int data) {

   if(!(top == 0)) {
      top = top-1;   
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}

int display() {

   printf("Element at top of the stack: %d\n" ,stack[top]);
   printf("Elements: \n");

   // print stack data 
   for(int i=MAXSIZE-1; i>=top; i--)
      printf("%d\n",stack[i]);
   }
   

int main() {
   int n, d;
   while(1) {
     printf("\nPress '1' to PUSH(add) an element OR '0' to POP(remove) an element \n");
     scanf(" %d", &n);

     if(n) {
        printf("\nEnter the element you wish to add to the stack \n");
        scanf(" %d", &d);
        Push(d);
   }
     else {
        Pop();
   }

   display();
   }
   
   return 0;
}
