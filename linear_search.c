#include<stdio.h>
int lsearch(int x[],int y,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(x[i]==y)
            return i;
    }
    return i;
}
int main()
{
    int a[10] = {9,3,5,4,6,7,8,1,10,2};
	int x,index,i;
	char ch;
	printf("\n The array is \n ");
	for(i=0;i<10;i++)
	printf("%d\t",a[i]);
	do{
        printf("\n Enter the element to be searched:");
		scanf("%d",&x);
        int n = sizeof(a)/sizeof(int);
        index = lsearch(a,x,n);
        if(index <10)
        printf("\n%d found at position %d in the array.",x,index);
        else
        printf("\n%d not found.",x);
        printf("\n Do you want to continue? (Y/N):");
        scanf(" %c", &ch);
	}while(ch == 'Y' || ch == 'y');
}
