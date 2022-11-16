#include <stdio.h>
struct polynomial
{
    float coeff;
    int exp;
};

struct polynomial poly[100];

void polyinp(int start,int stop)
{
    for(int i=start;i<=stop;i++)
    {
    	printf("Enter the power of the term: ");
 	scanf("%d",&poly[i].exp);      
	printf("Enter the coeff of the term with power %d :",poly[i].exp);
	scanf("%f",&poly[i].coeff);

    }
    
}

void polyprint(int start,int stop)
{
   for(int i=start;i<stop;i++)
    {
        if (poly[i].coeff!=0)
        {
            printf(" %.1fx^%d +",poly[i].coeff,poly[i].exp);
        }
    }
    if (poly[stop].exp==0)
    {
    	if (poly[stop].coeff!=0)
    	{
        printf(" %.1f",poly[stop].coeff);
    	}
    }
    else
    {
     	if (poly[stop].coeff!=0)
     	   {
     	       printf(" %.1fx^%d",poly[stop].coeff,poly[stop].exp);
     	   }
    }
    
    printf("\n");
}

int polysum(int starta,int startb,int stopa,int stopb,int startc)  
{
	void adda()
	{
		poly[startc].exp=poly[starta].exp;
		poly[startc].coeff=poly[starta].coeff;
		starta++;
		startc++;	
   	}
   	void addb()
   	{
   		poly[startc].exp=poly[startb].exp;
		poly[startc].coeff=poly[startb].coeff;
		startb++;
		startc++;
	}
	while(starta<=stopa && startb<=stopb)
	{
		if (poly[starta].exp<poly[startb].exp)
		{
			addb();	
		}
		else if(poly[starta].exp>poly[startb].exp)
		{
			adda();
		}
		else
		{
			poly[startc].exp=poly[starta].exp;
			poly[startc].coeff=poly[starta].coeff+poly[startb].coeff;
			starta++;
			startb++;
			startc++;
		}
	}
	while(starta<=stopa)
	{
		adda();
	}
	while(startb<=stopb)
	{
		addb();
	}
	return startc-1;
			
}


void main()
{
    
    int num1,num2,start1,start2,start3;
    printf("Enter the number of terms  of both the polynomials: ");
    scanf("%d %d",&num1,&num2);
    start1=0,start2=start1+num1,start3=start2+num2;
    printf("Enter the coeffcients of first polynomial in decreasing order\n");
    polyinp(start1,start2-1);
    printf("Ente the coeffcients of the second polynomial in decreasing order\n");
    polyinp(start2,start3-1);
    
    //calculating sum
    int stop3=polysum(start1,start2,start2-1,start3-1,start3);
    printf("\nThe first polynomial is \n");
    polyprint(start1,start2-1);
    printf("The second polynomial is \n");
    polyprint(start2,start3-1);
    printf("The polynomial sum is \n");
    polyprint(start3,stop3);

}

