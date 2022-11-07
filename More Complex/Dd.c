#include<stdio.h>
int main()
{
    float h,w,bmi;

    printf("Enter your height meter :\n");
    scanf("%f",&h);

    printf("Enter your weight kg:\n");
    scanf("%f",&w);

    bmi = w / (h * h);

    printf("Your body mass index(bmi):%f\n",bmi);

    if(bmi<15)
    {
        printf("bmi category is starvation");
    }
    else if(bmi>=15.1 && bmi<=17.5)
    {
        printf("bmi category is Anorexic");
    }
    else if(bmi>=17.6 && bmi<=18.5)
    {
        printf("bmi category is starvation");
    }
}