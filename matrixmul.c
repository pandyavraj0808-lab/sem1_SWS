#include<stdio.h>
int main()
{
    int i,j,r,c,r1,c1;
    printf("Enter dimensions of first matrix : ");
    scanf("%d %d",&r,&c);
    printf("Enter Dimensions of second matrix : ");
    scanf("%d %d",&r1,&c1);
    int a[r][c];
    int b[r1][c1];
    if(c==r1)
    {
        int mul[r][c1];
        printf("Enter %d Elemets of first matrix : \n",r*c);
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter %d Elemets of second matrix : \n",r1*c1);
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("Multiplication of both matrix is \n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c1;j++)
            {
                mul[i][j]=0;
                for(int k=0;k<r;k++)
                {
                    mul[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d ",mul[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Invalid Dimensions!!! \n");
    }
    return 0;

}
