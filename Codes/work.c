#include<stdio.h>
#include<string.h>

int s,k,j=0,i=0,x=0,a[100];

int rec(int a[],int s)
{

    if (k==a[j])
        { j++;
          x++;
          rec(a,s);
        }
    return x;
}

main()
{
    int occ;

    printf("Enter size of array:");
    scanf("%d",&s);

    printf("Enter the interger array:");
    for(i=0;i<s;++i)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the nummber to check for frequency:");
    scanf("%d",&k);

    occ = rec(a,s);

    printf("Frequency of %d is %d",k,occ);

    return 0;
}
