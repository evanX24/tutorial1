#include<stdio.h>
void insertionsort(int x[],int size)
{
    int i,j,key;
    for(i=1;i<size;i++)
    {
        key = x[i];
        j = i-1;
        while(j>=0 && x[j]>=key)
        {
            x[j+1] = x[j];
            j--;
        }
        x[j+1]=key;
    }
}
int main()
 {
    int a[] = {9,8,3,5,7};
    int i;
    printf("\n the array is \n");
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);
    insertionsort(a,5);
    printf("\n sorted array is \n");
    for(i=0;i<5;i++)
    printf("%d\t",a[i]);
    return 0;
 }