#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,z;
    int max,point=0;

    printf("Enter the 1st side of triangle:\n");
    scanf("%d",&x);

     printf("Enter the 2nd side of triangle:\n");
    scanf("%d",&y);

     printf("Enter the 3rd side of triangle:\n");
    scanf("%d",&z);

    //equilateral means all sides are equal

    if(x==y&&x==z)
    {
        printf("Triangle is equilateral\n");
    }
    //isoscales means two sides is of same length

    else if(x==y||y==z||z==x)
    {
        printf("triangle is isoscales\n");

    }

    //scalene triangle all sides are different 
    else if(x!=y&&y!=z&&z!=x)
    {
        printf("Triangle is scalane\n");
    }

    //right angles triangle it contains  90 degree angled which satisfy pythagoras theorem
    if((x*x)+(y*y)==(z*z) || (x*x)+(z*z)==(y*y) || (y*y)+(z*z)==(x*x) )
         {  
		     printf("It is a right angle triangle!\n");  
	}

    

    return 0;

}