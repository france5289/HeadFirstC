// how to pass a string to function ?
// what will happend if we print size of string in a function 

// What we learn:
// Array can be used as a pointer (but it is not equal to pointer)
// Array variable point to the memory of its first element

#include <stdio.h>

void print_str(char msg[ ]){ // what out how we declared the parameter
    // sizeof(char) = 2 bytes
    // so we expect it will output 2 * (length of string) 
    // but why not ?
    // actually 'msg' is a 'pointer' which point to the first character of string
    // size of pointer will be 4 (32-bits OS) or 8 bytes (64-bits OS)
    // that is the reason why !
    printf("The size of passed in string: %li bytes\n", sizeof(msg));
    printf("The content of given string: %s\n", msg);
}

int main(){
    int *p = NULL;
    printf("Size of a pointer: %li bytes \n", sizeof(p));
    char msg[] = "Today is good day!";
    print_str(msg); // actually we passed in a 'pointer' of string
    return 0;
}