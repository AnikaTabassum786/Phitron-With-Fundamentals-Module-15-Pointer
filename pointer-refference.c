#include<stdio.h>

void fun(int* x){
   *x=20; //using dereference pointer change the value of x
  
}

int main(){

  int x=10;
  fun(&x); //address of x is passed in fun function 
  printf("Value of main function  x= %d\n",x);

    
    return 0;
}