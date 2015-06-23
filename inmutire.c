#include<stdio.h>
#include<stdlib.h>

void inmultire(int **a,int **b,int **d,int count)
{
    int i,j,k,aux=0;
    for(i=0;i<count;i++)
    {
        for(j=0;j<count;j++)
        {
            d[i][j]=0;
            for(k=0;k<count;k++)
            {
                d[i][j]=d[i][j]+a[i][k]*b[k][j];

            }
        }
    }
}

int main()
{
    int **a,**b,**d;
    int c,i,j,count=1,putere,k;
    scanf("%d",&count);
    a=(int **)malloc(count* sizeof(int *));
    b=(int **)calloc(count,sizeof(int *));
    d=(int **)malloc(count *sizeof(int *));
    for(i=0;i<count;i++)
    {
        a[i]=(int *)malloc(count*sizeof(int));
        b[i]=(int *)calloc(count,sizeof(int));
        d[i]=(int *)malloc(count*sizeof(int));
    }
    for(i=0;i<count;i++)
    {
        for(j=0;j<count;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<count;i++)
    {
        for(j=0;j<count;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    inmultire(a,b,d,count);
    printf("\n");
    for(i=0;i<count;i++)
    {
        for(j=0;j<count;j++)
        printf("%d ",d[i][j]);
        printf("\n");
    }
    return 0;
}

