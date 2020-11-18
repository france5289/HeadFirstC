#include <stdio.h>
#define MULTIPLY(a,b) (a)*(b)

int main(){
    int a = 3, b = 4;
    printf("%d\n", MULTIPLY(a++,b)); // you should prevent apply a++ to macro!
    a = 3, b = 4;
    printf("%d\n", MULTIPLY(++a,b)); // desired result
}