#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;
struct node *top = NULL;

void push(int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    {
        if(top == NULL)
        {
            temp->next = NULL;
            top = temp;
        }
        else
        {
           temp->next = top;
           top = temp;
        }
    }
}
int pop()
{
    if(top == NULL){
        printf("Underflow");
        return -1;
    }
    else
    {
        struct node *p = top;
        top = top->next;
        return p->data;
        free(p);
    }
}
void display()
{
    struct node *p = top;
    while(p!= NULL)
    {
        printf("\n %d\t",p->data);
        p = p->next;
    }
}
int main()
{
    int x,ch;
    do{
        printf("\n Stack implementation");
        printf("\n 1.Push element ");
        printf("\n 2.Pop element ");
        printf("\n 3.Display ");
        printf("\n 4.Exit");
        printf("\n Enter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:printf("Enter number : "); scanf("%d",&x);push(x);break;
            case 2:printf("value popped = %d",pop());break;
            case 3:display();break;
            case 4:break;
            default:printf("\n Wrong choice");
    }
  }while(ch!=4);
}