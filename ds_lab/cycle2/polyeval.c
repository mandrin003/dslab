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
    int deg;
    float x,sum=0.0;
    printf("Enter the degree of the polynomial :");
    scanf("%d",&deg);
    printf("Enter the coeffcients of the polynomial in decreasing order\n");
    //taking input
    for(int i=deg;i>=0;i--)
    {
        poly[i].exp=i;
        printf("Enter the coeff of the term with power %d :",i);
        scanf("%f",&poly[i].coeff);
    }
    //printing polynomial
    printf("The Polynomial is\n");
    for(int i=deg;i>0;i--)
    {
        if (poly[i].coeff!=0)
        {
            printf(" %.1fx^%d +",poly[i].coeff,poly[i].exp);
        }
    }
    if (poly[0].coeff!=0)
        printf(" %.1f",poly[0].coeff);
    
    printf("\n");
    //evaluating polynomial
    printf("Enter the value of x :");
    scanf("%f",&x);
    for(int i=deg;i>=0;i--)
    {
        sum+=poly[i].coeff*pow(x,poly[i].exp);
    }
    printf("The calue of the expression is : %.2f",sum);






}
