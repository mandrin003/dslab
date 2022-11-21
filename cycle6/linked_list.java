import java.util.Scanner;
public class linked_list 
{
	class Node
	{
		int data;
		Node next;
		public Node(int data)
		{
			this.data=data;
		}
	}
	
	public Node head=null;
	public Node tail=null;
	
	public void addNode(int data)
	{
		Node newNode= new Node(data);
		
		if (head==null)
		{
			head=newNode;
			tail=newNode;
		}
		else
		{
			tail.next=newNode;
			tail=newNode;
		}
	}
	
	public void display()
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
	public static void main(String args[])
	{
		int n;
		linked_list sll=new linked_list();
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the number of elements in list");
		n=sc.nextInt();
		System.out.println("Enter the elements");
		for(int i=0;i<n;i++)
		{
			sll.addNode(sc.nextInt());
		}
		sll.display();
	}
}
		
		
