import java.io.*;
 
public class Palin
{
public static void main(String args[])
{ 
int num=545;
int rev=0;
int m=num;
  while(m>0)
 {
 
  int temp=m%10;
  rev=rev*10+temp;
  m=m/10;
 
 
}
if(rev==num)
{
System.out.println("palindrome");
}
else
System.out.println("Not palindrome");


}
}
