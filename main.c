#include<stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int main(){
   printf("Added value: %d\n", add(5, 2));
   printf("Subtraction: %d\n", sub(5, 2));
   printf("Multiplication: %d\n", mul(3, 4));
   return 0;
}
