#include<stdio.h>
int binsearch(int arr[],int l,int r,int x)
{
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]<x)
        l = mid+1;
        else
        r = mid-1;
    }
    return -1;
}
int main()
 {
    int a[] = {1,4,3,5,7};
    int i,x;
    int n = sizeof(a)/sizeof(a[0]);
    printf("\n the array is \n");
    for(i=0;i<5;i++)
        printf("%d\t",a[i]);
    printf("\nEnter the value to search:");
        scanf("%d",&x);
    int ans = binsearch(a,0,n-1,x);
     (ans == -1) ? printf("Element is not present"
                             " in array")
                  : printf("Element is present at "
                            "index %d",ans);
    return 0;
 }