#include<stdio.h>
#include<malloc.h>

struct node {
	int value;
	node *next;
};

typedef struct node snode;
snode *newNode, *ptr, *prev, *temp;
snode *first = NULL, *last = NULL;

void show(node *n) {
	node * x = n;
	printf("\n<------------- output ---------------->\n");
	while( x != NULL ) {
		printf("%d ", x->value);
		x = x->next;
	}
	printf("\n+++++++++++++++++++++++++++++++++++++\n"); 
}


snode* createNode( int val) {
	newNode = (node *) malloc(sizeof(node));

	if( newNode == NULL) {
		printf("\n Memory was not allocated");
		return 0;
	} else {
		newNode->value = val;
		newNode->next = NULL;
	}

	return newNode;
}

void insert_node_first(int val) {
	newNode = createNode(val);

	if( first == last && first == NULL ) {
		first = last = newNode;
		first->next = NULL;
		last->next = NULL;
	} else {
		// insert value into first
		// temp = first;
		// first = newNode;
		// first->next = temp;

		// insert value into last
		last->next = newNode;
		last = newNode;
		last->next = NULL;
	}
	show(first);
}

int main() {
	char ans = 'y';
	int data;
	node * n;
	while( ans == 'y' ) {
		scanf("%d", &data);		
		if( data == 0 ) {
			ans = 'n';
		}else {
			insert_node_first(data);
		}
	}
	return 0;
}
