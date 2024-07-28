#include<stdio.h>
 void leftshift(int x[])
 {
    int temp,i;
    temp = x[0];
    for(i=0;i<5;i++)
    x[i] = x[i+1];
    x[i-1] = temp;
 }
 int main()
{
    int a[5] = {1,2,3,4,5};
    int i;
    printf("\n org array is\n");
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);
    leftshift(a);
    printf("\n array after leftshift is\n");
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);
}