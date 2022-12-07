#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
	int coeff;
    int exp;
	struct node* next;
}node;

node* head1=NULL;
node* ptr;
node* head2=NULL;
node* head3=NULL;

node* createnode(int exp,int coeff)
{
	node* newnode=(node*)malloc(sizeof(node));
	newnode->exp = exp;
    newnode->coeff=coeff;
	return newnode;
}

void polyinput(int size,node* head)
{
    printf("Enter the terms in the increasing order of power \n");
    for (int i=0;i<size;i++)
    {
        int exp,coeff;
        printf("Enter the Power of the term :");
        scanf("%d",&exp);
        printf("Enter the coeffcient of the term with the power %d :",exp);
        scanf("%d",&coeff);
        if (head==NULL)
        {
            head=createnode(exp,coeff);
            ptr=head;
        }    
        else
        {
            node* temp=createnode(exp,coeff);
            ptr->next=temp;
            ptr=temp;
        }
    }
}

void polyprint(node* head)
{
    printf("hello");
    node* currentnode=head;
    while (currentnode->next!=NULL)
    {
        if(currentnode->coeff!=0)
            printf("%dx^%d +",currentnode->coeff,currentnode->exp);
        currentnode=currentnode->next;
    }
    //for aesthu
    if(currentnode->coeff!=0)
    {
        if(currentnode->exp==0)
            printf(" %dx",currentnode->coeff);
        else
            printf("%dx^%d+",currentnode->coeff,currentnode->exp);
    }    
}

void polymultiply(node* head1,node* head2,node* head3)
{
    node* currentnode1=head1;
    node* currentnode2=head2;
    int exp,coeff;
    while (currentnode1!=NULL)
    {
        while (currentnode2!=NULL)
        {
            exp=currentnode1->exp + currentnode2->exp;
            coeff=currentnode1->coeff * currentnode2->coeff;
            //sending value to sum linked list
            if (head3==NULL)
                head3=createnode(exp,coeff);
            else
            {
                node* temp=createnode(exp,coeff);
                head3->next=temp;
                head3=temp;
            }
            currentnode2=currentnode2->next;
        }
        currentnode1=currentnode1->next; 
    }
}

void main()
{
    int size1,size2;
    printf("Enter the number of terms  of both the polynomials: ");
    scanf("%d %d",&size1,&size2);
    printf("For First Polynomial\n");
    polyinput(size1,head1);
    printf("For Second Polynomial\n");
    polyinput(size2,head2);
    polymultiply(head1,head2,head3);
    printf("First Polynomial is \n");
    polyprint(head1);
    printf("Second Polynomial is \n");
    polyprint(head2);
    printf("Polynomial Sum is \n");
    polyprint(head3);

    
}