#include<stdio.h>
void main()
{
    char another;
    int num;
    do
    {
        printf("Enter the number");
        scanf("%d",&num);
        printf("square od %d is %d\n",num,num*num);
        printf("want to enter the another number y/n");
        fflush(stdin);
        scanf("%c",&another);
    } while (another =='y');
    return 0;
}