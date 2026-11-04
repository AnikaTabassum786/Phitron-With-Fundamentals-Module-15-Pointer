#include<stdio.h>

int main(){

    int x=20;
    int* pointer; //Declare a pointer

    pointer=&x; // address of x is in pointer
    *pointer = 200; //pointer change value of x
    printf("%d\n",x);

     return 0;
}