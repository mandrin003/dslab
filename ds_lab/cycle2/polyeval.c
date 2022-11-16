#include <stdio.h>
#include <math.h>
struct polynomials
{
    float coeff;
    int exp;
};
struct polynomials poly[20];

void main()
{
    int numterms;
    float x,sum=0.0;
    printf("Enter the number of terms of the polynomial :");
    scanf("%d",&numterms);
    printf("Enter the coeffcients of the polynomial in decreasing order\n");
    //taking input
    for(int i=numterms-1;i>=0;i--)
    {
        printf("Enter the power of the term");
        scanf("%d",&poly[i].exp);
        printf("Enter the coeff of the term with power %d :",poly[i].exp);
        scanf("%f",&poly[i].coeff);
    }
    //printing polynomial
    printf("The Polynomial is\n");
    for(int i=numterms-1;i>0;i--)
    {
        if (poly[i].coeff!=0)
        {
            printf(" %.1fx^%d +",poly[i].coeff,poly[i].exp);
        }
    }
    if (poly[0].exp==0)
    {
    	if (poly[0].coeff!=0)
    	{
        printf(" %.1f",poly[0].coeff);
    	}
    }
    else
    {
     	if (poly[0].coeff!=0)
     	   {
     	       printf(" %.1fx^%d",poly[0].coeff,poly[0].exp);
     	   }
    }
    		
    printf("\n");
    //evaluating polynomial
    printf("Enter the value of x :");
    scanf("%f",&x);
    for(int i=numterms-1;i>=0;i--)
    {
        sum+=poly[i].coeff*pow(x,poly[i].exp);
    }
    printf("The calue of the expression is : %.2f",sum);






}
