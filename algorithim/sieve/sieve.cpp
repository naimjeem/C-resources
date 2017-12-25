// C++ program to print all primes smaller then
// n using Sieve of Eratosthens

#include<stdio.h>
#include<string.h>

void SieveOfEratosthenes( int n) {

	// Create a boolean array "prime[0...n]"
	// all enries it as true. A value in prime
	// finally be false if i is NOt a prime

	bool prime[n+1];
	memset(prime, true, sizeof(prime) );

	for(int p=2; p*p <=n; p++) {
	
		// If prime[p] is not change, then
		if( prime[p] == true ) {
			// Update all multiples of p
			for(int i=p*2; i<=n; i+= p) 
				prime[i] = false;
		}
	}

	// Print all prime numbers
	for( int p=2; p<=n; p++ ) {
		if( prime[p] )
			printf("  %d  ", p);
	}
}

int main() {
	int n = 20;
	SieveOfEratosthenes(n);
	printf("\n");
}
