#include <stdio.h>
typedef struct
{
    int row;
    int col;
    int val;
}sparsematrix;
 sparsematrix sparse[50];

int issymmetric(int val)
{
    if(sparse[0].row!=sparse[0].col)
    {
        return 1;
    }
    else
    {
     for(int i=1;i<=val;i++)
     {
        int flag=0;
        for(int j=1;j<=val;j++)
        {
            if(sparse[i].row==sparse[j].col&&sparse[i].col==sparse[j].row&&sparse[i].val==sparse[j].val)
                flag=1; 
        }
        if (flag=0)
                return 1; 
        
     }
     return 0;

    }
}

void main()
{
    int valcount,row,col;
    printf("Enter the number of non zero values :");
    scanf("%d",&valcount);
    sparsematrix sparse[valcount+1];
    printf("Enter number of rows and columns :");
    scanf("%d%d",&row,&col);
    sparse[0].row=row;
    sparse[0].col=col;
    sparse[0].val=valcount;
    printf("Enter the rowno,colno and values in sparse matrix form :\n");
    for (int i=1;i<=valcount;i++)
    {    
        scanf("%d%d%d",&sparse[i].row,&sparse[i].col,&sparse[i].val);
    }
    //printing the sparse matrix
    for (int i=0;i<=valcount;i++)
    {
        printf("|\t%d\t%d\t%d\t|\n",sparse[i].row,sparse[i].col,sparse[i].val);
    }


    if(issymmetric==0)
        printf("The sparse matrix is symmetric");
    else
        printf("The sparse matrix is not symmetric");
        
        
       
        
}
