#include<stdio.h>
#include<string.h>

int front=-1,rear=-1,size=1000;
char queue[1000],newqueue[1000],value;

//ptr=&queue;
//ptr2=&newqueue;

void enQueue(char value){
    if(rear==size-1)
        printf("Queue is full\n");
    else{
         rear=0;
         queue[rear]=value;
         rear++;
        }
}


main(){
    int i,j,k,x;
    FILE *fp,*fp2;

    fp=fopen("test.txt","w");

    printf("Enter characters in the queue:");

    for(i=0;i<20;i++){
        scanf("%c",&value);
        enQueue(value);
        x++;
        }
    fclose(fp);

    fp2=fopen("new.txt","w");

    for(j=0;j<x;j++){
        if(queue[j]!=" "){
            enQueue(newqueue[j]);
            }
        else{
            j--;
            continue;
            }
    }

    fclose(fp2);

    for(k=0;queue[k]!='\0';k++){
        printf("%c",&queue[k]);
        }
    printf("\n ------------------------- \n");

    for(k=0;newqueue[k]!='\0';k++){
        printf("%c",&newqueue[k]);
        }

return 0;
}
