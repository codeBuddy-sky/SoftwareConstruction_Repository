#include<stdio.h>
#include<string.h>
#include<assert.h>

int size=0,k,j=0,i=0,x=0,a[100],occ=0;

int rec(int a[],int size)
{
    if (a[j]==k && j<size)
        { j++;
          x++;
          rec(a,size);
        }
    else if(j<size)
    {
        j++;
        rec(a,size);
    }
    return x;
}

int main()
{
    printf("Enter size of array:");
    scanf("%d",&size);
    
    assert (size>0);    //Pre-condition : Array must not be empty.
    
    printf("Enter the interger array:");

    for(i=0;i<size;++i)
        scanf("%d",&a[i]);

    printf("Enter the nummber to check for frequency:");
    scanf("%d",&k);

    occ = rec(a,size);
    
    assert (occ>0);     //Post-condition : Frequency of an element must be non-negative.

    printf("Frequency of %d is %d",k,occ);

    return 0;
}
