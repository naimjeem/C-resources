#include<stdio.h>

#define R 10
#define C 20

int main() {
	int (*p)[R][C];

	// 10 * 20 * sizeof( int ) = 10 * 20 * 4 = 800
	printf("%lu \n", sizeof(*p) );

	char *c[] = { "GeksQuiz", "MCQ", "TEST", "QUIZ" };
	char **cp[] = { c+3, c+2, c+1, c };
	char ***cpp = cp;

	printf("**++ cpp       :  %s \n", **++cpp );		// TEST
	printf("*--*++cpp+3    :  %s \n ", *--*++cpp+3 );   // sQuiz
	printf("*cpp[-2]+3    :  %s \n", *cpp[-2]+3 );      // Z
	printf("cpp[-1][-1]+1  :  %s \n", cpp[-1][-1]+1 );  // CQ

	return 0;
}
