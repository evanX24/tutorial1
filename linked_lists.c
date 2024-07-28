#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
struct node *head = NULL;
struct node *tail = NULL;

void insert(int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data= x;
    if(head == NULL)
    {
        temp->next = NULL;
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
        temp->next = NULL;
    }
}
void inserthead(int x)
{
    struct node *temp =(struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = head;
    head = temp;
}
void insertpos(int x,int pos)
{
    if(pos<0)
    {
        printf("\n Wrong position");
    }
    else
    {
         int i,flag =1;
        struct node *p = head;
        struct node *temp = (struct node*)malloc(sizeof(struct node));
        temp->data = x;
        for(i=1;i<pos-1;i++)
        {
            if(p == NULL)
            {
                flag = 0;
            }
            else{
                p= p->next;
            }  
        }
        if(flag == 0)
        {
            printf("\n Wrong position");
        }
        else
        {
             temp->next = p->next;
             p->next = temp;
        }
    }
}
void deletehead()
{
    if(head == NULL)
    {
        printf("\n underflow");
    }
    else
    {
        struct node *p = head;
       head = p->next;
       free(p);
    }
}
void deletetail()
{
    if(tail == NULL)
    {
        printf("\n empty");
    }
    else
    {
        struct node *p = head;
        while(p->next != tail)
            p = p->next;
            p->next = NULL;
            tail = p;
    
    }
}
void deletepos(int pos)
{
    if(pos<0)
        printf("Wrong Position");
    else 
    {
        int flag=1,i;
        struct node *p = head;
        struct node *temp;
        for(i=0;i<pos-1;i++)
        {
            if(p == NULL)
               {
                 flag = 0; 
                break;
               }
            else
            {
                p = p->next;
            }
        }
        if(flag == 0)
        {
            printf("\n wrong pos");
        }
        else
        {
                temp = p->next;
                p->next = temp->next;
                free(temp);
        }
       }
}
void printlist()
{
    struct node *p = head;
        while(p != NULL)
        {
            printf("%d\t",p->data);
            p = p->next;     
         }
}
int main()
{
    int x,ch,pos;
    do
    {
         printf("\n------------------single linked list--------------");
	    printf("\n 1. Insertion at tail ");
        printf("\n 2. Insertion at head ");
	    printf("\n 3. Insertion at specified location ");
	    printf("\n 4. Delete at head ");
	    printf("\n 5. Delete at tail ");
	    printf("\n 6. Delete at specified location ");
	    printf("\n 7. Display Linked List");
	    printf("\n 8. Exit");
	    printf("\n Please Enter Choice :");
	         scanf("%d",&ch);
             switch(ch){
             case 1:printf("\n Enter the value to insert:");scanf("%d",&x);insert(x);break;
             case 2:printf("\n Enter the value to insert:");scanf("%d",&x);inserthead(x);break;
             case 3:printf("\n Enter value and pos:");scanf("%d%d",&x,&pos);insertpos(x,pos);break;
             case 4:deletehead();break;
             case 5:deletetail();break;
             case 6:printf("\n Enter pos: "); scanf("%d",&pos);deletepos(pos);break;
             case 7:printlist();break;
             case 8:printf("\n Exit");break;
             default :printf("\n Wrong pos");break;
             }
    } while(ch!=8);
    
}