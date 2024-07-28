#include<stdio.h>
#define size 5
int queue[size];
int front = -1;
int rear = -1;
 void enqueue(int x)
 {
    if(front == size-1)
    {
        printf("\n Queue overflow");
    }
    else
    {
        if(front == -1)
        {
            front++;
           queue[++rear] = x;
        }
        else
          queue[++rear] = x;
    }
 }
 int dequeue()
 {
    if(front == -1 || front > rear)
    {
        printf("\n Underflow");
        return -1;
    }
    else
    {
        return queue[front++];
    }
 }
 void display()
 {
    int i;
    for(i = front;i<=rear;i++)
    printf("%d",queue[i]);
    printf("\n");
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