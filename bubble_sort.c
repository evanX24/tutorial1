#include<stdio.h>
 void bubblesort(int x[],int size)
 {
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-1;j++)
        {
            if(x[j]>x[j+1])
            {
                temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }
 }
 int main()
 {
    int a[] = {1,4,3,5,7};
    int i;
    printf("\n the array is \n");
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);
    bubblesort(a,5);
    printf("\n sorted array is \n");
    for(i=0;i<5;i++)
    printf("%d\t",a[i]);
    return 0;
 }