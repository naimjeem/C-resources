#include<stdio.h>
#include<malloc.h>

struct node {
	int data;
	int limit;
	node * ref[10];
};

void show( node * current, FILE * fp2 ) {
	if(current != NULL ) {
		fprintf(fp2, " %d ", current->data);
		for(int i=0;i<current->limit; i++) 
			show(current->ref[i], fp2);
	}
}

void insert(FILE *fp, FILE * fp2, node * current) {
	int val, limit;
	fscanf(fp, "%d %d", &val, &limit);
	if( val != -1 ) {
		current->limit = limit;
		current->data = val;
		for(int i=0; i<limit; i++) {
			current->ref[i] = (node *) malloc(sizeof(node));
			insert(fp, fp2, current->ref[i]);
		}
	} else {
		current = NULL;
	}
}

int main() {
	node * head, *current;
	current = NULL;
	FILE *fp, *fp2;
	
	fp = fopen("./input.txt", "r");
	fp2 = fopen("./output.txt", "a");

	fprintf(fp2, "\n\n ++++++++++++++++  graph-with-edge-vertex.cpp ++++++++ \n\n");

	if( fp == NULL )
		printf("\n File does not exists \n");
	else {
		if( fp2 == NULL ) 
			printf("\n Output.txt doesn't exits \n");
		else {

		//	node * head = (node *) malloc(sizeof(node));
			insert(fp, fp2, head);

			fprintf(fp2, "\n #############  Show ( %d  )  ################## \n", val);
			show(head, fp2);
		}
	}

	return 0;
}
