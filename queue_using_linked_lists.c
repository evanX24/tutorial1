#include<stdio.h>
#include<stdlib.h>
 typedef struct node{
      int data;
      struct node *next;
 }node;
 struct node *front = NULL;
 struct node *rear = NULL;

 void enqueue(int x)
 {
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data=x;
    if(front == NULL)
    {
        temp->next = NULL;
        front = temp;
        rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
        temp->next = NULL;
    }
 }
 int dequeue()
 {
   if(front == NULL)
        printf("\n Empty");
    else
    {
        struct node *p = front;
        int data = front->data;
        front = front->next;
        return p->data;
        free(p);
    }
 }
 void display()
 {
    if(front == NULL)
        printf("\n Empty");
    else
    {
        struct node *p= front;
        while(p!=NULL)
        {
            printf("%d\t",p->data);
            p= p->next;
        }
    }
 }
int main()
{
    int x,ch;
    do{
        printf("\n Stack implementation");
        printf("\n 1.Enqueue element ");
        printf("\n 2.dequeue element ");
        printf("\n 3.Display ");
        printf("\n 4.Exit");
        printf("\n Enter your choice : ");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:printf("Enter number : "); scanf("%d",&x);enqueue(x);break;
            case 2:printf("value popped = %d",dequeue());break;
            case 3:display();break;
            case 4:break;
            default:printf("\n Wrong choice");
    }
  }while(ch!=4);
}