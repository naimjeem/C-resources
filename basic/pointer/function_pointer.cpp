#include<stdio.h>

// A normal function with an int parameter
// and void return type

void fun(int a)  {
	printf("Value of a is %d \n", a);
}

void add(int a, int b) {
	printf("Addition %d + %d = %d \n", a, b, (a+b) );
}

void subtract(int a, int b) {
	printf("Subtraction %d - %d = %d \n", a, b, (a-b) );
}

void multiply(int a, int b) {
	printf("Multiply %d * %d = %d \n", a, b, (a*b) );
}

void division(int a, int b) {
	printf("Division %d / %d = %d \n", a, b, (a/b) );
}

void unknown(int a, int b) {
	printf("Unknown operation %d %d \n", a, b);
}

int main() {
	// fun_ptr is a pointer to function fun()
	// void (*fun_ptr)(int) = &fun;

	void (*fun_ptr)(int) = fun;

	/*
		The above line is equivalent of following two
		void (*fun_ptr) (int);
		fun_ptr = &fun;
	*/

	// Invoking fun() using fun_ptr
	// (*fun_ptr) (20);
	fun_ptr(100);

	void (*fun_ptr_arr[]) (int, int) = {add, subtract, multiply, division };

	unsigned int ch=1, a, b;

	while( ch != -1 ) {
		scanf("%d %d %d", &a, &b, &ch);
		
		fun_ptr_arr[ch](a, b);
	}

	return 0;
}
