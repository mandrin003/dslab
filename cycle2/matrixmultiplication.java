import java.util.*;
import java.util.Scanner;
public class matrixmultiplication{
static void matrixscan(int r,int c, int a[][])
	{
	Scanner ac=new Scanner(System.in);
	for(int i=0;i<r;i++)
		{
		for(int j=0;j<c;j++)
			{
			a[i][j]=ac.nextInt();
			}
		}
	}
public static void main(String args[]){
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter the dimensions of first matrix (row,coloumn)");
	int m=sc.nextInt();
	int n=sc.nextInt();
	System.out.println("Enter the dimensions of second matrix (row,coloumn)");
	int p=sc.nextInt();
	int q=sc.nextInt();
	if (n!=p)
		{
		System.out.println("Invalid matrix dimensions");
		}
	else
		{
		int a[][]=new int[m][n];    
		int b[][]=new int[p][q]; 
		int c[][]=new int[m][q];
		System.out.println("Enter the elements of matrix 1");
		matrixscan(m,n,a);
		System.out.println("Enter the elements of matrix 2");
		matrixscan(p,q,b);
		//multiplication of matrix
		System.out.println("The multiplied matrix is");
		for(int i=0;i<m;i++)
			{    
			for(int j=0;j<q;j++)
				{    
				c[i][j]=0;      
				for(int k=0;k<n;k++)       
					{      
					c[i][j]+=a[i][k]*b[k][j];      
					}  
				System.out.print(c[i][j]+" ");   
				} 
			System.out.println();   
			}
		}    
	}
}  



