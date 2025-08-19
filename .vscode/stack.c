#include<stdio.h>
#include<stdlib.h>
#define MAX 5
void push(int);
void pop();
void display();
void peak();
int s[MAX];
int top=-1;

int main()
{
    int choice,value;
    while(1)
    {
        printf("LIST OF MY FUNCTION: \n 1.Push element in stack: \n 2.Pop element from stack: \n 3.Display the stack: \n");
        printf(" 4.Peak element from stack: \n 5.EXIT\n Enter your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("what value want to push:\t");
                scanf("%d",&value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                peak();
                break;
            case 5:
                exit(0);
            default:
                printf("\nWrong Choice\n\n");
        }

    }
    return 0;
}
void push(int value)
{
    if(top==MAX-1)
    {
        printf("stack Overflow\n ");
    }
    else
    {
        top=top+1;
        s[top]=value;
    }    
}
void pop()
{
    if(top==-1)
    {
        printf("stack Underflow\n");
    }
    else
    {
        printf("\nPopped element is %d:\n",s[top]);
        top=top-1;
    }
}
void display()
{
    if(top==-1)
    {
        printf("Stack is empty!!!\n");
    }
    else{
        printf("stack elements are :\t");
        for(int i=0;i<=top;i++)
        {
            printf("%d\t",s[i]);
        }
    }
        printf("\n");
}
void peak()
{
    if(top==-1)
    {
        printf("Stack is empty!!!\n");
    }
    else
    {
        printf("Peak element is : %d\n",s[top]);
    }
}