#include<stdio.h>
#include<math.h>
int main()
{
    float R,G,B;
    float max,white,c,m,y,k;

    printf("Enter the value of R,G and B within range(0-255):\n");
    scanf("%f%f%f",&R,&G,&B);

    if(R==0 && G==0 && B==0)
    {
        c=m=y=0;
        k=1;

    }
    else
    {
        R=R/255;
        G=G/255;
        B=B/255;

        max=R;
        if(G>max)
        {
            max=G;
        }
        if(B>max)
        {
            max=B;
        }
        white=max;

        c= (white-R)/white;
        m= (white-G)/white;
        y= (white-B)/white;
        k= 1-white;
    }

    printf("cmyk is %f,%f,%f,%f\n",c,m,y,k);
    return 0;
    

}