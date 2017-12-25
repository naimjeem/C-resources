#include <stdio.h>

int main() {
	
	FILE *fp, *fp2;

	char buff[244];
	int a, b, c;

	fp = fopen("./input.txt", "r");
	fp2 = fopen("./output.txt", "a");	

	if(fp == NULL) {
		printf("File does not exists \n");
	}

	if(fp2 == NULL) {
		printf("File does not exists \n");
	}

	while( fscanf(fp, "%d %d %d", &a, &b, &c) == 3 ) {
		printf(" %d <> %d <> %d \n", a, b, c);	
		fprintf(fp2, "\n %d %d \n", a, b);
	}


	/*
	fscanf(fp, "%d", &a);
	printf("a : %d \n", a);

	fscanf(fp, "%d", &b);
	printf("b: %d \n", b);

	fscanf(fp, "%d", &c);
	printf("c: %d \n", c);
	
	fscanf(fp, "%d", &a);
	printf("a : %d \n", a);

	fscanf(fp, "%d", &b);
	printf("b: %d \n", b);

	fscanf(fp, "%d", &c);
	printf("c: %d \n", c);
	

	fscanf(fp, "%d", &a);
	printf("a : %d \n", a);

	fscanf(fp, "%d", &b);
	printf("b: %d \n", b);

	fscanf(fp, "%d", &c);
	printf("c: %d \n", c);
	*/

	/*
	fscanf(fp, "%s", buff);
	printf("1111: %s \n", buff);


	fgets(buff, 255, (FILE*) fp);
	printf("2: %s \n", buff);

	fgets(buff, 255, (FILE*) fp);
	printf("3: %s \n", buff);
	*/

	fclose(fp);
	return 0;
}
