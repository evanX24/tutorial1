#include<stdio.h>
#define size 50
int n;
void leftshift(int x[])
{
	int i,temp;
	temp = x[0];
	for(i=0;i<n;i++)
	x[i]=x[i+1];
	x[i-1]=temp;
}
//void leftshift(int x[])
// {
//     int i,temp;
//     temp = x[0];
//     for(i=0;i<n;i++);
//     x[i] = x[i+1];
//     x[i-1] = temp;
// }
void rightshift(int x[])
{
    int i,temp;
    temp = x[n-1];
    for(i=n-1;i>0;i--)
    x[i]= x[i-1];
    x[0] = temp;
}
void insertion(int x[],int index)
{
   int y,i;
   if(n>=size)
   {
    printf("\n overflow");
   }
   else 
   {
        printf("\n Enter the value to be inserted:");
        scanf("%d",&y);
     if(index == n)
     {
        x[index] ==y;
        n++;
     }
     else
     {
        for(i=n;i>=index;i--)
        x[i] = x[i-1];
        x[index] = y;
        n++;
     }
   }
}
void deletion(int x[],int index)
{
    int i;
    if(n<=0 || index<=0)
    printf("\n underflow");
    else if(index>=n)
        printf("\n wrong index");
    else
    {
        if(index == n-1)
        {
            n--;
        }
        else
        {
            for(i=index;i<n;i++)
            x[i] = x[i+1];
            n--;
        }
    }
}
void display(int x[])
{
    int i;
    printf("\n The array is\n");
    for(i=0;i<n;i++)
    printf(" %d ",x[i]);
}
int main()
{
 int x,index,i,ch;
 int a[size];
 printf("\n Enter the size of the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf(" element a[%d]",i);
        scanf("%d",&a[i]);
    }
    do
    {
      printf("\n ------Array Operation------");
		printf("\n 1.Display");
		printf("\n 2.Leftshift");
		printf("\n 3.Rightshift");
		printf("\n 4.Insertion");
		printf("\n 5.Deletion");
		printf("\n 6.Exit");
        printf("\n enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 2 :leftshift(a);break;
            case 1:display(a);break;
            case 3:rightshift(a);break;
            case 4:printf("\nEnter the index to insert:");scanf("%d",&index); insertion(a,index);break;
            case 5:printf("\nEnter the index to delete:");scanf("%d",&index); deletion(a,index);break;
            case 6:break;
            default:printf("\nwrong input");
        }
    }while (ch!= 6);
}