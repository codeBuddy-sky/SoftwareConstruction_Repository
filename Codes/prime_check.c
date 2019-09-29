#include<stdio.h>
int main()
{
    int a,b,i,j,c=0,k=0;
    printf("Enter a number:");
    scanf("%d",&a);
        for (i=1;i<=a;i++)
        {


                if (a%i==0)
                c++;
            }
            if (c==2)
            printf("%d is prime",a);
            else
            printf("%d is not prime",a);

    return 0;
}

