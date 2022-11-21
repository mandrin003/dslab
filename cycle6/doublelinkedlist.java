import java.util.Scanner;
public class doublelinkedlist 
{
	class Node
	{
		int data;
		Node prev;
		Node next;
		public Node(int data)
		{
			this.data=data;
		}
	}
	
	public Node head=null;
	public Node tail=null;
	
	public void addNodeEnd(int data)
	{
		Node newNode= new Node(data);
		
		if (head==null)
		{
			head=newNode;
			head.prev=null;
			tail=newNode;
			
		}
		else
		{
			tail.next=newNode;
			newNode.prev=tail;
			tail=newNode;
		}
	}
	public void addNodeFirst(int data)
	{
		Node newNode= new Node(data);
		
		if (head==null)
		{
			head=newNode;
			head.prev=null;
			tail=newNode;
			
		}
		else
		{
			head.prev=newNode;
			newNode.next=head;
			head=newNode;
			head.prev=null;
		}	
	}
	public void addNodeData(int reference,int data)	
	{
		Node newNode=new Node(data);
		Node currentNode=head;
		if (head==null)
		{
			head=newNode;
			head.prev=null;
			tail=newNode;
		}
		else
		{
			while (currentNode!=null)
			{
				if (currentNode.data==reference)
				{
					Node nextNode=currentNode.next;
					newNode.next=nextNode;
					nextNode.prev=newNode;
					currentNode.next=newNode;
					newNode.prev=currentNode;
					break;
				}
				
				currentNode=currentNode.next;
			}
		}
	}
	public void displayFromFront()
	{
		Node currentNode=head;
		if (head==null)
			System.out.println("Linked list is empty");
		else
		{
			while (currentNode!=null)
			{
				System.out.print(currentNode.data+" ");
				currentNode=currentNode.next;
			}
		}
	}	
	public void displayFromBack()
	{
		Node currentNode=tail;
		if (head==null)
			System.out.println("Linked list is empty");
		else
		{
			while (currentNode!=null)
			{
				System.out.print(currentNode.data+" ");
				currentNode=currentNode.prev;
			}
		}
	}	
	
	public static void main(String args[])
	{
		doublelinkedlist dll=new doublelinkedlist();
		dll.addNodeEnd(2);
		dll.addNodeEnd(3);
		dll.addNodeEnd(5);
		dll.addNodeEnd(6);
		dll.addNodeData(3,4);
		dll.addNodeFirst(1);
		
		System.out.println("Displaying from front :");
		dll.displayFromFront();
		System.out.println("\nDisplaying from back :");
		dll.displayFromBack();
	}
}
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
	
