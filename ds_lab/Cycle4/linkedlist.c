#include <stdio.h>;

struct node
{
	int data;
	struct node *next;
};

struct node *head=NULL;
head=malloc(sizeof(struct node));
struct node *tail=NULL;
tail=malloc(sizeof(struct node));
	
void addelements(int data)
{
	struct node *newnode=data
	newnode=malloc(sizeof(struct node));
	if (head==NULL)
	{
		head=newnode;
		tail=newnode;
	}
	else
	{
		tail->next=newnode;
		tail=newnode;
	}
}
void display()
{
	node *currentnode=NULL;
	if (head=NULL)
	{
		printf("Linked list is empty")
	}
	else
	{
		while(currentnode!=NULL)
		{
		printf("%d ",currentnode->data);
		currentnode=currentnode->next;
		}
	}
}

int main()
{
	
	int n,data;
	printf("Enter the number of Elements :");
	scanf("%d",&n)
	for (int i=0;i<n;i++)
	{
		scanf("%d",&data);
		addnode(data)	
	}

	
}






