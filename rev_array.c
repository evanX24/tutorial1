// #include<stdio.h>
// int main()
// {
//     int i,j;
//     int a[5]= {1,2,3,4,5};
//     int b [5];
//     printf("\n the array is\n");
//     for(i=0;i<=4;i++)
//     printf("%d\t",a[i]);

//     for(i=0,j=4;i<=4,j>=0;i++,j--)
//     {
//         b[i] = a[j];
//     }
//     printf("\n the reversed array is \n");
//     for(i=0;i<=4;i++)
//     printf("%d\t",b[i]);
// // }
#include <stdio.h>

void reverseArray(int a[], int b[], int size) {
    int i, j;

    for (i = 0, j = size - 1; i < size; i++, j--) {
        b[i] = a[j];
    }
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];

    printf("The original array is:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t", a[i]);
    }
    reverseArray(a, b, 5);
    printf("\nThe reversed array is:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t", b[i]);
    }

    return 0;
}
