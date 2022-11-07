#include<stdio.h>
int main()
{
    float h,cc,ts;

    printf("Enter the values of hardness,carbon content and tensile strenth:\n");
    scanf("%f%f%f",&h,&cc,&ts);

    if(h>50 && cc<0.7 && ts>5600)
    {
        printf("grade of still is 10\n");
    }
    else  if(h>50 && cc<0.7 )
    {
        printf("grade of still is 9\n");
    }
    else  if( cc<0.7 && ts>5600)
    {
        printf("grade of still is 8\n");
    }
    else  if(h>50 && ts>5600)
    {
        printf("grade of still is 7\n");
    }
    else  if(h>50 || cc<0.7 || ts>5600)
    {
        printf("grade of still is 6\n");
    }
    else  if(h<50 && cc>0.7 && ts<5600)
    {
        printf("grade of still is 5\n");
    }

    return 0;







}