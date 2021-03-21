/*
當 char 或 short int 之間進行數值運算時，C compiler 會自動做 integer promotion.
先轉成 int，若 int 的數值範圍不足以表示，轉成 unsigned int.
*/

#include <stdio.h>

void example1(void){
    char a = 30, b = 40, c = 10;
    char d = (a * b) / c;
    printf ("%d\n ", d);
}

void example2(void){
    char a = 0xfb;
    unsigned char b = 0xfb;

    printf("a = %c", a);
    printf("\nb = %c", b);

    if (a == b)
        printf("\nSame");
    else
        printf("\nNot Same");
}

void example3(void){
    unsigned int x = -1;
    int y = ~0;
    if (x == y)
        printf("\nsame");
    else
        printf("\nnot same");
}

int main(void){
    example1();
    example2();
    example3();
    return 0;
}