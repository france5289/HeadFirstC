// The correct way to declare a function without any parameters
// Program 1 (Compiles and runs fine in C, but not in C++) 
void fun(void) {  } 
// 'void' means that this function dosen't accept any parameters !

int main(void) 
{ 
    fun(10, "GfG", "GQ"); 
    // code above will cause compile error !

    return 0; 
} 
