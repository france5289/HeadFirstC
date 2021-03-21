/* Myth of void pointer
*/
#include <stdio.h>

void example1(void){
    void *vptr;
    int v = 0;
    vptr = &v;
    // printf("%v", *vptr);
    printf("%d",*(int *)vptr);
}

int main(void){
    example1();
}