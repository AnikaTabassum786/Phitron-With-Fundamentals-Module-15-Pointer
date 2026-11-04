#include<stdio.h>

void fun(int x){
    // x=20;
    printf("Value of fun function  x= %d\n",x);
    printf("Address of fun function x=%p\n",&x);
   
}

int main(){

  int x=10;
  fun(x); //value of x is passed in fun function not reference
  printf("Value of main function  x= %d\n",x);
  printf("Address of main function x=%p\n",&x);
    
    return 0;
}