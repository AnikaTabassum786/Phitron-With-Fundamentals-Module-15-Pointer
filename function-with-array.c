#include <stdio.h>

void fun(int a[], int n)
{
    a[1] = 100;
    printf("Fun Function: %p\n", a);

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", a[i]);
    }
}

int main()
{

    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    fun(a, n);
    printf("Main Function: %p\n", a);

    return 0;
}