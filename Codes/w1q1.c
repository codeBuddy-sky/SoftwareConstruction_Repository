#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int i,j,s[100],n,temp;

int array_arrange(int s[100]);

int array_arrange(&s[100])
{
    printf("Enter array size, again! :");
    scanf("%d",&n);

    for(i=0;i<n-2;++i)
    for(j=0;j<n-i;++j)
    {
        if(s[j]>s[j+1])
            temp=s[j];
            s[j]=s[j+1];
            s[j+1]=temp;
    }

    for(i=0;i<n;i++)
    {
        printf("%d\n",s[i]);
    }
}

main()
{
    printf("Enter size of array:");
    scanf("%d",&n);

    printf("Enter the array:");
    for(j=0;j<n;j++)
        scanf("%d",&s[j]);

    array_arrange(s[n]);

    return 0;
}
