// Incorrect way to declare function without any parameters
// Program 2 (Compiles and runs fine in C, but not in C++) 
void fun() { } 

// 'fun()' means that this function accept 'any numbers of parameters'.
// but we don't want it accept any parameters!

int main(void) 
{ 
	fun(10, "GfG", "GQ"); // it will pass compilation and run.
	return 0; 
} 
