
 import java.util.*;
 public class garbage
 {
 public static void main(String args[])
 {
 
 long m1,m2,m3;
System.out.print("Total memory is ");
m1=Runtime.getRuntime().totalMemory();
System.out.println(m1);
m2=Runtime.getRuntime().freeMemory();
System.out.print("Free Memory before garbage collection ");
System.out.println(m2);
System.gc();
System.out.print("Free Memory after garbage collection ");
m3=Runtime.getRuntime().freeMemory();
System.out.print(m3);
System.out.println();
}
}
