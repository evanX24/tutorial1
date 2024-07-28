#include<stdio.h>
int n = 3;
 void insertion(int x[],int index)
 {
    int y,i;
    if(n>=5)
    {
        printf("\n wrong index");
    }
    else
    {
        printf("\n Enter the value for insertion:");
        scanf("%d",&y);
        if(index==n)
        {
            x[index] = y;
            n++;
        }
        else
        {
            for(i=n;i>index;i--)
            x[i]= x[i-1];
            x[index] = y;
            n++; 
        }
    }
 }
 int main()
 {
    int a[5] = {1,2,3};
    int i,index;
    printf("\n the original array is\n");
        for(i=0;i<n;i++)
            printf("%d\t",a[i]);
    printf("\n Enter the index for insertion:");
        scanf("%d",&index);
    insertion(a,index);
    printf("\n after inserting element at given position:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
 return 0;
 }