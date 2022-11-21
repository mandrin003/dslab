import java.util.*;
  class Employee
{
String name;
int age;
String phno;
float salary;
String address;


 void print()
{
System.out.println("Name is :"+name);
System.out.println("Age is :"+age );
System.out.println("Phone Number  is :"+phno);
System.out.println("Salary is :"+salary);
System.out.println("Address is :"+address);

}
  void input()
{
Scanner sc=new Scanner(System.in);
System.out.println("Enter Name  :");
name=sc.nextLine();
sc.nextLine();
System.out.println("Enter age  :");

age=sc.nextInt();
System.out.println("Enter phone number  :");
phno=sc.nextLine();
sc.nextLine();
System.out.println("Enter salary  :");
salary=sc.nextFloat();
sc.nextLine();
System.out.println("Enter address :");
address=sc.nextLine();
 // //
 System.out.println("Enter department : ");
sc.nextLine();
System.out.pritln("Enter specialization : ");
sc.nextLine();
 }
public static void main(String args[])
{
Officer A =new Officer();
A.input();
A.print();
Manager M =new Manager();
M.input();
M.print();


}


}
  class Officer extends Employee
{
String specialization;
String designation;
  
}

 class Manager extends Employee
{
String specialization;
String designation;
  
}

 

 

