#include <stdio.h>
struct sparsematrix
{
    int row;
    int col;
    int value;
};
struct sparsematrix sparse[50];


void main()
{
int rownum,colnum,valcount=0;
    int mat[50][50];
    printf("Enter number of rows : ");
    scanf("%d",&rownum);
    printf("Enter number of columns : ");
    scanf("%d",&colnum);

    //Creating matrix
    printf("Enter elements of matrix : \n");
    for(int i=0;i<rownum;i++){
        for(int j=0;j<colnum;j++){
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n");

    //Displaying the matrix
    printf("The matrix is  \n");
    for(int i=0;i<rownum;i++){
        for(int j=0;j<colnum;j++){
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

    //Adding elements to sparse representation
      for(int i=0,z=1;i<rownum;i++){
        for(int j=0;j<colnum;j++){
            if(mat[i][j]!=0){
                valcount++;
                sparse[z].row=i;
                sparse[z].col=j;
                sparse[z].value=mat[i][j];
                z++;
            }            
        }
    }
    printf("\n");

    sparse[0].value=valcount;
    sparse[0].row=rownum;
    sparse[0].col=colnum;
    printf("Sparse representation : \n");
    for(int i=0;i<=valcount;i++){
        printf("%d\t%d\t%d\n", sparse[i].row,sparse[i].col,sparse[i].value);
    }
    printf("\n");

    //Sparsity
    float sparsity=(float)(sparse[0].row*sparse[0].col-sparse[0].value)/(sparse[0].row*sparse[0].col);
    printf("Sparsity : %0.2f\n", sparsity);
    
}