// #include<stdio.h>
// int main()
// {
//     int a[5] = {1,2,3,4,5};
//     int i,index,temp =0;
//     for(i=0;i<5;i++)
//     {
//         if(temp<a[i])
//         {
//             temp = a[i];
//             index = i;
//         }
//     }
//     printf("\n The lagrest element in the array is %d",a[index]);
// }
#include <stdio.h>

int largest(int arr[], int size) {
    int temp = arr[0]; // Initialize with the first element
    for (int i = 1; i < size; i++) {
        if (arr[i] > temp) {
            temp = arr[i];
        }
    }
    return temp;
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int ans = largest(a, 5);
    printf("The largest element in the array is: %d\n", ans   );
    return 0;
}
