import java.io.*;
import java.util.Scanner;

public class iostreamfilehandling
{
	public static void readfile() throws IOException
	{	
	
	        FileInputStream fread = new FileInputStream("myfile.txt");  
            	Reader freader = new InputStreamReader(fread);  
           	int i = freader.read();  
           	while (i != -1) 
            	{  
               		System.out.print((char)i);  
               		i= freader.read();  
            	}
            	fread.close();  
      
	}  

	public static void writefile() throws IOException
	{ 
        	FileOutputStream fwriter=new FileOutputStream("hello.txt");
		String i="Hello World";
		byte b[]=i.getBytes();
		fwriter.write(b);
		fwriter.close();
          
    	}
    	
    	public static void main(String args[])
    	{
    		try
    		{
    			readfile();
    			writefile();
    		}
    		catch (FileNotFoundException e)
    		{
    			System.out.println("File not found");  
        		e.printStackTrace();
        	}
        	catch(IOException f)
        	{
        		System.out.println("Error");
        	}
    	}
}  
