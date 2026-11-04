#include <stdio.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%p\n", &a[i]); // print address of a[n]
    }
    printf("---------------\n");
    printf("%p\n", &a[0]); // print address of a[0]
    printf("---------------\n");
    printf("%p\n", &a); // print address of a[0]
    printf("---------------\n");
    printf("%d\n", *a); // dereference and print value of 0 index
    printf("---------------\n");

    *a=200;
    *(a+1)=300;
     for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]); // print  array[n]
    }

    return 0;
}