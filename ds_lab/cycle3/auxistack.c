#include<stdio.h>
#define size 10
int stack[10],top1=-1,top2=size;


//for auxistack
void push2(int x)
{
      top2--;
      stack[top2] = x;
}

void pop2()
{
	top2++;
}

void min()
{
	if (top2==size)
	{
		printf("Stack is empty");
	}
	else
	{
	 printf("The minimum element is : %d\n",stack[top2]);
	}
}

//normal stack
void push1(int value)
{
   if(top1 == top2-1)
   {
      printf("Stack is Full\n");
   }
   else
   {
      top1++;
      stack[top1] = value;
      if (top1==0)
      {
      	push2(value);
      }
      else
      {
      	if (value<stack[top2])
      	{
      		push2(value);
      	}
      	else
      	{
      		push2(stack[top2]);
      	}
      }
      printf("Element inserted\n");
   }
}


void pop1()
{
   if(top1 == -1)
      printf("Stack is Empty\n");
   else
   {
      printf("Deleted : %d\n", stack[top1]);
      pop2();
      top1--;
   }
}

void display1()
{
   if(top1 == -1)
      printf("Stack is Empty\n");
   else
   {
      int i;
      printf("Stack elements are:\n");
      for(i=top1; i>=0; i--)
	  printf("%d\n",stack[i]);
   }
}   
  

int main()
{
   
   int value, choice;
   while(1)
   {
      printf("1. Push\n2. Pop\n3. Display\n4. Minimum\n5. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice)
      {
	 case 1:printf("Enter the value to be inserted: ");
		 	scanf("%d",&value);
		 	push1(value);
		 	break;
	 case 2:pop1();
		 	break;
	 case 3:display1();
		 	break;
	 case 4:min();
	 		break;
	 case 5:return 0;
	 	
	 default:printf("\nWrong selection\n");
      }
   }
}
