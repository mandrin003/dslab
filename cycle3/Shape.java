import java.util.*;
 abstract class Shape
{

void no_of_sides()
{}

public static void main(String args[])
{
Rectangle R=new Rectangle();
Triangle T=new Triangle();
Hexagon h=new Hexagon();
R.no_of_sides();
T.no_of_sides();
h.no_of_sides();
}
}
class Rectangle extends Shape
{
void no_of_sides()
{
System.out.println("No of sides = 4");
}
}
class Triangle extends Shape
{


void no_of_sides()

{
System.out.println("No of sides = 3");
}
}
class Hexagon extends Shape
{
void no_of_sides(){
System.out.println("No of sides = 6");
}
}




















 
