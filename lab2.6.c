#include<stdio.h>
int main()
{
    long long a,b;
    scanf("%d",&a);
    b = a;
    if(a == 0)
        printf("Zero");
    else
    {
        int i,n;
        for(n=0;b>0;n++)
        {
            b/=10;
        }
        int x[n];
        for(i=0;i<n;i++)
        {
            x[i] = a%10;
            a/=10;
        }

    }

    return 0;
}

