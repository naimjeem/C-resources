#include<stdio.h>
#include<malloc.h>

struct node {
	int data;
	int limit;
	node * ref[10];
};

node * insert(FILE * fp, FILE * fp2) {
	int val, limit;
	// scanf("%d %d", &val, &limit);
	fscanf(fp, "%d %d", &val, &limit);
	fprintf(fp2, "%d <> %d \n", val, limit);
	if( val != -1 ) {
		node * new_node = (node *) malloc(sizeof(node));
		if( new_node == NULL ) {
			printf("\n Memory Allocation Failed \n");
			return 0;
		}
		new_node->limit = limit;
		new_node->data = val;	
		for(int i=0; i<limit; i++) {
			new_node->ref[i] = insert(fp, fp2);
		}
		return new_node;
	} else {
		return NULL;
	}
}

void show( node * current, FILE * fp2 ) {
	if( current != NULL ) {
		fprintf(fp2, " %d   ", current->data);
		for(int i=0; i<current->limit; i++ ) {
			show(current->ref[i], fp2);
		}
	}
}

int main() {
	node * head;
	FILE * fp, *fp2;
	fp = fopen("./input.txt", "r");
	fp2 = fopen("./output.txt", "a");
	
	fprintf(fp2, "\n\n ++++++++++++++++++++++++   graph.cpp    +++++++++++++++++ \n\n");

	if( fp == NULL ) {
		printf("\n File does not exist \n");
	} else {
		head = insert(fp, fp2);

		fprintf(fp2, "\n Show : \n");
		show( head, fp2 );

		printf("\n");
	}
	return 0;
}
