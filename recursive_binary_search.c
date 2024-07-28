#include<stdio.h>
int bsearch(int a[],int l,int r,int x)
{
    if(r>l)
    {
        int mid = l + (r-l)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        else if(a[mid]>x)
            return bsearch(a,l,mid-1,x);
        return bsearch(a,mid+1,r,x);
    }
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
    int ans = bsearch(a,0,n-1,x);
     (ans == -1) ? printf("Element is not present"
                             " in array")
                  : printf("Element is present at "
                            "index %d",ans);
    return 0;
 }