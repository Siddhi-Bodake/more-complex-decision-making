#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your character:\n");
    scanf("%c",&ch);

    if(ch>=65&&ch<=90)
        printf("The character is an uppercase letter\n");
    if(ch>=97&&ch<=122)
        printf("The chracter is an lowercase letter\n");
    if(ch>=48&&ch<=57)
        printf("Chracter is a digit\n");
    if((ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=127))
        printf("The charcters is a special symbols\n");

    return 0;
}