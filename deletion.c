#include<stdio.h>
int n =3;
void deletion(int x[],int index)
{
    int i,temp;
    if(n<=0||index<=0)
        printf("\n Wrong Index");
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
int main()
 {
    int a[5] = {1,2,3};
    int i,index;
    printf("\n the original array is\n");
        for(i=0;i<n;i++)
            printf("%d\t",a[i]);
    printf("\n Enter the index for deletion:");
        scanf("%d",&index);
    deletion(a,index);
    printf("\n after deletion element at given position:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
 return 0;
 }