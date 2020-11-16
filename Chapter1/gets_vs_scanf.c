#include <stdio.h>

int main(){
    char str[20];
    printf("Input a string\n");
    gets(str);
    printf("Input string is :%s\n", str);
    printf("Input a string\n");
    scanf("%s", str);
    printf("Input string is :%s\n", str);
    return 0;
}