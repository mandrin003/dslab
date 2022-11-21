//print all prime numbers upto n to a file
import java.io.*;
import java.util.Scanner;
public class primefile
{
	
	public static int isprime(int a)
	{
		int flag=1;
		for (int i=2;i<=(a/2);i++)
		{
			if (a%i==0)
				flag=0;
		}
		return flag;
	}
		 
	 
	public static void main(String args[])
	{
		int n;
		String str;
		Scanner sc=new Scanner(System.in);
		filehandling file=new filehandling();
		System.out.print("Enter the limit to which prime numbers should be found :");
		n=sc.nextInt();
		
     		try
     		{
     			FileWriter Writer= new FileWriter("primefile.txt");
     			for (int i=2;i<=n;i++)
			{
				if (isprime(i)==1)
				{
					str=Integer.toString(i);
					Writer.write(str+" ");
				}
			}
            		Writer.close();
            		System.out.println("Successfully written");
        	}
        	catch (IOException e)
        	{
        		System.out.println("An error has occurred.");  
     		}
     		System.out.println("The Prime Numbers are");
		file.readfile();
		
	}
}
