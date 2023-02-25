#include<stdio.h>
 main()
{
    int mat[10][10];
    int i,j,row,col,sum=0;
    printf("Enter rows and columns for matrix\n");
    scanf("%d%d",&row,&col);
    printf("Enter the matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }

    printf("The matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                sum=sum+mat[i][j];
            }
        }
    }

    printf("The sum of diagonal = %d\n",sum);
}
//I took this program logic from google 
