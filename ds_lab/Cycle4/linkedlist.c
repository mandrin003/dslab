#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
	int data;
	struct node* next;
}node;

typedef struct
{
	node* top;	
}stack;
stack st;
node* createnode(int data)
{
	node*newnode=(node*)malloc(sizeof(node));
	newnode->data = data;
	return newnode;
}

void push(int data)
{
	if (st.top==NULL)
	{
		st.top=createnode(data);
	}
	else
	{
		node* temp=createnode(data);
		temp->next=st.top;
		st.top=temp;
	}
}
int pop()
{
	/*
	if (st.top==NULL)
	{
		printf("Stack underflow\n");
		return 404;
	}
	*/
	node* temp=st.top;
	int data=temp->data;
	st.top=temp->next;
	free(temp);
	return data;
}

void peek()
{
	printf("Top element is :%d",st.top->data);
}

void display()
{
	node* currentnode=st.top;
	while(currentnode!=NULL)
	{
		printf("%d",currentnode->data);
		currentnode=currentnode->next;
	}
}

int main()
{
   st.top=NULL;
   int value,choice;
   while(1)
   {
      printf("1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice)
      {
	 case 1:printf("Enter the value to be inserted: ");
		    scanf("%d",&value);
		 	push(value);
		 	break;
	 case 2:if (st.top==NULL)
			{
				printf("stack underflow");
			}
			else
			{
				pop();
			}

		 	break;
	 case 3:display();
		 	break;
	 case 4:peek();
	 		break;
	 case 5:return 0;
	 default:printf("\nWrong selection\n");
      }
   }
}













