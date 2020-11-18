// Use this file to observe how compilation work
#include<stdio.h>
#define add(a,b) (a+b) // use macro
int main(void){
    int a = 5, b = 4;
    printf("Addition is: %d\n", add(a,b));
    return 0;
}