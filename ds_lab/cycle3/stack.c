#include <stdio.h>
#define size 10
int stack[10],top=-1;

void push(int value)
{
   if(top ==(size-1))
      printf("Stack is Full\n");
   else
   {
      top++;
      stack[top] = value;
      printf("Element inserted\n");
   }
}
void pop()
{
   if(top ==-1)
      printf("Stack is Empty\n");
   else
   {
      printf("Deleted : %d\n", stack[top]);
      top--;
   }
}
void display()
{
   if(top == -1)
      printf("Stack is Empty\n");
   else
   {
      int i;
      printf("Stack elements are:\n");
      for(i=top; i>=0; i--)
	 printf("%d\n",stack[i]);
   }
}


int main()
{
   
   int value,choice;
   while(1)
   {
      printf("1. Push\n2. Pop\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice)
      {
	 case 1:printf("Enter the value to be inserted: ");
		    scanf("%d",&value);
		 	push(value);
		 	break;
	 case 2:pop();
		 	break;
	 case 3:display();
		 	break;
	 case 4:return 0;
	 default:printf("\nWrong selection\n");
      }
   }
}
