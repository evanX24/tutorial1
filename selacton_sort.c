#include<stdio.h>
void selection_sort(int x[],int size)
{
    int i,j,temp;
    for ( i = 0; i < size; i++)
    {
        for ( j = 0; j < size-1; j++)
        {
            if(x[i]<x[j])
            {
                temp =x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
        
    }
    
}
int main()
 {
    int a[] = {1,9,8,5,7};
    int i;
    printf("\n the array is \n");
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);
     selection_sort(a,5);
    printf("\n sorted array is \n");
    for(i=0;i<5;i++)
    printf("%d\t",a[i]);
    return 0;
 }