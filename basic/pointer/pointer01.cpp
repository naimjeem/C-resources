#include<stdio.h>
#include<bits/stdc++.h>

int main() {
	// A normal integer variable
	int Var = 10;

	// A pointer variable that holds address var.
	int *ptr = &Var;

	// This line prints value at address stored in ptr.
	// Value stored is value of variable "Var"
	printf("Value of Var = %d \n", *ptr);

	// The output of this line may be different in different
	// runs even on same machine
	printf("Address of Var = %p\n", ptr);

	// We ca also use ptr as lvalue (Left hand 
	// side of assignment)
	*ptr = 20; // Value at address is now 20

	// This prints 20
	printf("After doing *ptr=20, *ptr is %d \n", *ptr);

	printf("\n\n  pointer arithmetic \n\n");

	int v[3] = { 10, 100, 200 };

	// Declare pointer variable;
	int *abc;

	// Assign the address of v[10] to abc
	abc = v;

	for( int i=0; i<3; i++) {
		printf("Value of *ptr = %d \n", *abc);
		printf("Value of ptr = %p \n\n ", abc);
		
		// Increment pointer abc by 1
		abc ++;
	}

	return 0;
}
