#include<stdio.h>
#include<stdlib.h>
#define MAX 5
void dequeue();
void enqueue(int);
void display();
int front=-1,rear=-1;
int q[MAX];
int main()
{
    int choice,value;
    while(1)
    {
        printf("choose your choice\n 1.enqueue in queue\n 2.dequeue in queue\n 3.display the queue\n 4.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("what value want to enqueue: \t");
                scanf("%d",&value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);


            default:
                printf("\n\nWORNG INPUT\n\n ");
        }

    }
    return 0;
}
void enqueue(int value)
{
    if(rear==MAX-1)
    {
        printf("queue overflow!!!\n");
    }
    else 
    {  
        rear++;
        q[rear]=value;
    }
    if(front==-1)
        front++;
}
void dequeue()
{
    if (front==-1)
        printf("queue underflow!!!!\n");
    else
        {
            printf("deleted element is %d\t",q[front]);
        }
        printf("\n");
    if(rear==front)
    {
        rear=-1;
        front=-1;
    }
    else
        front++; 
}
void display()
{
    if(rear==front==-1)
        printf("queue underflow!!!\n");
    else
    {
        printf("queue element is :\n");
        for(int i=front;i<=rear;i++)
      {
          printf("%d\t",q[i]);
      }
    }
    printf("\n");
}