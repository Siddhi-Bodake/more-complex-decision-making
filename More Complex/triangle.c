#include<stdio.h>
int main()
{
    int s1,s2,s3,ls,sum;
    printf("Enter the 3 sides of triangle:\n");
    scanf("%d%d%d",&s1,&s2,&s3);

    if(s1>s2)
    {
        if(s1>s3)
        {
        sum=s2+s3; ls=s1;
        }
        else
        {
            sum=s1+s2; ls=s3;
        }
    }
    else
    {
        if(s2>s3)
        {
            sum=s1+s3; ls=s2;
        }
        else
        {
            sum=s1+s2; ls=s3;
        }
    }  

    if(sum>ls)
        printf("Triangle is valid\n");
    else
        printf("Triangle is not valid\n");

    return 0;

    
}