#include<stdio.h>
void rightshift(int x[])
{
    int i,temp;
    temp = x[4];
    for(i=4;i>=0;i--)
    x[i] = x[i-1];
    x[0] = temp;
}
int main()
{
    int a[5] = {1,2,3,4,5};
    int i;
    printf("\n org array is\n");
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);
    rightshift(a);
    printf("\n array after leftshift is\n");
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);
}