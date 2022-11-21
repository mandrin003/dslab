import java.util.*;

public class string_tokenizer
{
	public static void main(String args[])
	{
		int sum=0;
		String str,a;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the numbers to be added with  ,  between them");
		str=sc.nextLine();
		StringTokenizer strtok=new StringTokenizer(str,",");
		System.out.print("The numbers are:");
		while (strtok.hasMoreTokens())
		{
			a=strtok.nextToken();
			System.out.print(a+ " ");
			sum+=Integer.parseInt(a);
		}
		System.out.println("\nThe sum of these numbers is :"+sum);
	}
}


	
