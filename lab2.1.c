#include<stdio.h>
int main()
{
    int a,b,c,sum;
    char g;
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    if(sum>=80)
        g='A';
    else
    {
        if(sum>=75)
            g='B+';
        else
        {
            if(sum>=70)
                g='B';
            else
            {
                if(sum>=65)
                    g='C+';
                else
                {
                    if(sum>=60)
                        g='C';
                    else
                    {
                        if(sum>=55)
                            g='D+';
                        else
                        {
                            if(sum>=50)
                                g='D';
                            else
                                g='F';
                        }

                    }

                }

            }

        }

    }
    printf("%c",g);
}
