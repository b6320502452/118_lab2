#include<stdio.h>
int main()
{
    int a[3],i,j,tem;
    char b[4];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    fflush(stdin);
    gets(b);
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
    for(i=0;i<3;i++)
    {
        if(b[i]=='A')
        {
            printf("%d",a[0]);
        }
        else
        {
            if(b[i]=='B')
            {
                printf("%d",a[1]);
            }
            else
                printf("%d",a[2]);
        }
        printf(" ");
    }
}
