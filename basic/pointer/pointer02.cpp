#include<stdio.h>

/*
	If we want to change a local point of one function inside another
	function, then we must pass pointer to the pointer. By passing the
	pointer to the pointer, we can change pointer to point something
	else.
*/
void fun02( int **p) {
	int q = 100;
	*p = &q;
}

/*
	inside fun(), "q" is a copy of the pointer p. So if we
	change "q" to point something else then "p" remains uneffected.
*/
void fun( int *p) {
	int q = 10;
	p = &q;
}

int main() {
	int r = 20;

	int *p = &r;
	printf("first : %d \n", *p);

	/*

	*/
	fun(p);
	printf("second : %d \n", *p); // output: 20
	
	fun02(&p);
	printf("third : %d \n", *p); // output: 100

	return 0;
}
