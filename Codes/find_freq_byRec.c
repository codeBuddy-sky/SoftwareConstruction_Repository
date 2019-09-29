#include<stdio.h>
#include<string.h>

int s,k,j=0,i=0,x=0,a[100],occ=0;

int rec(int a[],int s)
{

    if (a[j]==k && j<s)
        { j++;
          x++;
          rec(a,s);
        }
    else if(j<s)
    {
        j++;
        rec(a,s);
    }
    return x;
}

main()
{
    printf("Enter size of array:");
    scanf("%d",&s);

    printf("Enter the interger array:");

    for(i=0;i<s;++i)
        scanf("%d",&a[i]);

    printf("Enter the nummber to check for frequency:");
    scanf("%d",&k);

    occ = rec(a,s);

    printf("Frequency of %d is %d",k,occ);

    return 0;
}
