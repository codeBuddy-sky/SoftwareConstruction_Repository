
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct employee {
    char name[20];
    int eid;
    float salary;
};

main()
{
    struct employee emp[10],*ptr;
    int i,n;
    float rand;

    ptr = &emp;

    printf("Enter number of employees,(n):");
    scanf("%d",&n);

    printf("\nEnter details:");
    for (i=0;i<n;i++)
    {
        scanf("%s",&emp[i].name);
        scanf("%d",&emp[i].eid);
        scanf("%f",&emp[i].salary);
    }

    printf("\nEnter any random value:");
    scanf("%f",&rand);

    for (i=0;i<n;i++)
    {
        if((ptr+i)->salary > rand)
        {
            printf("%s\n",(ptr+i)->name);
            printf("%d\n",(ptr+i)->eid);
            printf("%.3f\n",(ptr+i)->salary);
        }
    }

    return 0;
}
