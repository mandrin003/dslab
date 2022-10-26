#include<stdio.h>
#define size 10
int stack[10],top1=-1,top2=size;

void push1(int value){
   if(top1 == top2-1)
      printf("Stack is Full\n");
   else{
      top1++;
      stack[top1] = value;
      printf("Element inserted\n");
   }
}
void push2(int value){
   if(top2 ==top1)
      printf("Stack is Full\n");
   else{
      top2--;
      stack[top2] = value;
      printf("Element inserted\n");
   }
}

void pop1(){
   if(top1 == -1)
      printf("Stack is Empty\n");
   else{
      printf("Deleted : %d\n", stack[top1]);
      top1--;
   }
}
void pop2(){
   if(top2==size)
      printf("Stack is Empty\n");
   else{
      printf("Deleted : %d\n", stack[top2]);
      top2++;
   }
}

void display1(){
   if(top1 == -1)
      printf("Stack is Empty\n");
   else{
      int i;
      printf("Stack elements are:\n");
      for(i=top1; i>=0; i--)
	  printf("%d\n",stack[i]);
   }
}

void display2(){
   if(top2 == size)
      printf("Stack is Empty\n");
   else{
      int i;
      printf("Stack elements are:\n");
      for(i=top2; i<size; i++)
	  printf("%d\n",stack[i]);
   }
}



int main()
{
   
   int value, choice;
   while(1){
      printf("1. Push1\n2. Pop1\n3. Display1\n4. Push2\n5. Pop2\n6. Display2\n7. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice){
	 case 1:printf("Enter the value to be inserted: ");
		 	scanf("%d",&value);
		 	push1(value);
		 	break;
	 case 2:pop1();
		 	break;
	 case 3:display1();
		 	break;
	 case 4:printf("Enter the value to be inserted: ");
		 	scanf("%d",&value);
	 		push2(value);
	 		break;
	 case 5:pop2();
	 		break;
	 case 6:display2();
	 		break;
	 case 7:return 0;
	 	
	 default:printf("\nWrong selection");
      }
   }
}

