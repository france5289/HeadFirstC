// We will look at how to move the pointer index manually and what will happen
#include <stdio.h>

int main()
{
    int nums[] = {1,2,3};
    char str[] = "Hi how are you";
    printf("nums is at %p\n", nums);
    printf("nums + 1 is at %p\n", nums+1);

    printf("str is: %s\n", str);
    printf("str + 1 is: %s\n", str+1);

    int doses[] = {1,3,2,1000};
    printf("Issue doses %i\n", 3[doses]);
    // in C standard define that 'a[b] = *(a+b)'
    // hence '3[doses]' == *(3+doses)
    return 0;
}
