import java.io.*;
import java.util.Scanner;

//using reader,writer class which is faster
public class filehandling
{
	public static void createfile()
	{
		try
		{
			File obj=new File("myfile.txt");
			if (obj.createNewFile())
			{
				System.out.println(obj.getName()+"created");
			}
			else
			{
				System.out.println("File already exists");
			}
		}
		catch(IOException e)
		{
		System.out.println("Something went wrong");
		}
	}
	public static void readfile()
	{
	    	try 
	    	{
	    		FileReader reader=new FileReader("myfile.txt");    
         		int i=reader.read();    
         		while(i!=-1)
         		{    
              			System.out.print((char)i);
              			i=reader.read();    
         		}
         		reader.close();    
	    	
	    	}
            		
        	catch (IOException e) 
        	{
            		System.out.println("File not Found");
        	}
        }
        
        public static void writefile()
        {
     		try
     		{
     			FileWriter Writer= new FileWriter("myfile.txt");
            		Writer.write("Hello World!!");
            		Writer.close();
            		System.out.println("Successfully written");
        	}
        	catch (IOException e)
        	{
        		System.out.println("An error has occurred.");  
     		}
	}	
		
		
	public static void main(String arg[])
	{
		createfile();
		writefile();
		readfile();
	}
}
	
		
