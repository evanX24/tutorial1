#include<stdio.h>
#define size 5
int stack[size];
int top = -1;

void push(int x)
{
    if(top == size-1)
       printf("\n stack is full");
    else
         stack[++top] = x;
}
int  pop()
{
    if(top == -1)
    {
            printf("\n Underflow");
           return -1;
    
    }
    else
        return stack[top--];
}
void display()
{
   int i;
   for(i=top;i>=0;i--){
   
   printf("%d",stack[i]);
   printf("\n");
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