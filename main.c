#include<stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }

int main(){
   printf("Addition: %d\n", add(5, 2));
   printf("Subtraction: %d\n", sub(5, 2));
   return 0;
}
