// Implementation of empty descending stack

#include <stdio.h>

int MAXSIZE = 8;       
int stack[8];     
int top = MAXSIZE;            

int isempty() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}
   
int isfull() {

   if(top == 0)
      return 1;
   else
      return 0;
}

int peek() {
   return stack[top];
}

int Pop() {
   int data;
	
   if(!isempty()) {
      data = stack[top];
      top = top - 1;   
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}

int Push(int data) {

   if(!isfull()) {
      top = top + 1;   
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}

int display() {

   printf("Element at top of the stack: %d\n" ,peek());
   printf("Elements: \n");

   // print stack data 
   for(int i=top; i>=0; i--)
      printf("%d\n",stack[i]);
   }
   

int main() {
int n, d;
while(1)
{
printf("\nPress '1' to PUSH(add) an element OR '0' to POP(remove) an element \n");
scanf(" %d", &n);

if(n)
{
printf("\nEnter the element you wish to add to the stack \n");
scanf(" %d", &d);
Push(d);
}
else
{
Pop();
}

display();
}

   printf("Stack full: %s\n" , isfull()?"true":"false");
   printf("Stack empty: %s\n" , isempty()?"true":"false");
   
   return 0;
}
