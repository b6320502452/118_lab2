
#include<stdio.h>
int main()
{
    int age;
    int i=92;
    char name;
    char odd_emoji[10][10]= {"(^_^)","(*o*)","(T_T)"};
    char even_emoji[10][10]= {"{@_@}","{*v*}","{X_X}"};
    scanf("%c",&name);
    scanf("%d",&age);
    if(age%2==0)
    {
        if(name>=65 && name<=73)
        {
            printf("%s",even_emoji[0]);
        }
        else if(name>=74 && name<=82)
        {
            printf("%s",even_emoji[1]);
        }
        else if(name>=83 && name<=90)
        {
            printf("%s",even_emoji[2]);
        }
    }
    else
    {
        if(age%5==0)
        {
            if(name>=65 && name<=73)
            {
                printf("%c%s/",(unsigned int)i,odd_emoji[0]);
            }
            else if(name>=74 && name<=82)
            {
                printf("%c\%s/",(unsigned int)i,odd_emoji[1]);
            }
            else if(name>=83 && name<=90)
            {
                printf("%c%s/",(unsigned int)i,odd_emoji[2]);
            }
        }


    }
    return 0;
}
