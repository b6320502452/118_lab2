#include<stdio.h>
int main()
{
    int a[3],i,j,tem;
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3-i;j++)
        {
            if(a[j]>a[j+1])
            {
                tem=a[j];
                a[j]=a[j+1];
                a[j+1]=tem;
            }
        }
    }
    printf("%d %d %d ",a[0],a[1],a[2]);
}
