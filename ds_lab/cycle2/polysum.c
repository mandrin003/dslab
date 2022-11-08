#include <stdio.h>
struct polynomial
{
    float coeff;
    int exp;
};

struct polynomial poly[100];

void polyinp(int start,int stop,int deg)
{
    for(int i=start;i<stop;i++)
    {
        poly[i].exp=deg;
        printf("Enter the coeff of the term with power %d :",deg);
        scanf("%f",&poly[i].coeff);
        deg--;

    }
    
}

void polyprint(int start,int deg)
{
    while(deg!=0)
    {
        if (poly[start].coeff!=0)
        {
            printf(" %.1fx^%d +",poly[start].coeff,poly[start].exp);
        }
        deg--,start++;
    }
    if (poly[start].coeff!=0)
        printf(" %.1f",poly[start].coeff);
    
    printf("\n");
}

int polysum(int a,int b,int c,int deg1,int deg2)  //a=start index of first poly, similarly b for second poly and c for polynomial sum
{

    if(deg1>deg2)
    {   
        int x=deg1-deg2;
        while(x!=0)
        {
            poly[c].coeff=poly[a].coeff;
            poly[c].exp=poly[a].exp;
            a++,c++,x--;
            
        }
        while (deg2!=-1)
        {
            poly[c].coeff=poly[a].coeff+poly[b].coeff;
            poly[c].exp=poly[a].exp;
            a++,b++,c++,deg2--;
        }
        return deg1;
    }
    else
    {
        int x=deg2-deg1;
        while(x!=0)
        {
            poly[c].coeff=poly[b].coeff;
            poly[c].exp=poly[b].exp;
            b++,c++,x--;
            
        }
        while (deg1!=-1)
        {
            poly[c].coeff=poly[a].coeff+poly[b].coeff;
            poly[c].exp=poly[b].exp;
            a++,b++,c++,deg1--;
        }
        return deg2;

    }

}


void main()
{
    int deg1,deg2;
    int start1,start2,start3;
    printf("Enter the degree of the two polynomials: ");
    scanf("%d %d",&deg1,&deg2);
    start1=0,start2=deg1+1,start3=deg1+deg2+2;
    printf("Enter the coeffcients of first polynomial in decreasing order\n");
    polyinp(start1,start2,deg1);
    printf("Ente the coeffcients of the second polynomial in decreasing order\n");
    polyinp(start2,start3,deg2);
    
    //calculating sum
    int deg=polysum(start1,start2,start3,deg1,deg2);
    printf("\nThe first polynomial is \n");
    polyprint(start1,deg1);
    printf("The second polynomial is \n");
    polyprint(start2,deg2);
    printf("The polynomial sum is \n");
    polyprint(start3,deg);

}

