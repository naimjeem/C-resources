#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	node *prev;
	node *next;
};

node * create(int val) {
	//	int val;
	//	scanf("%d", &val);
	node * newNode = (node *) malloc( sizeof(node));	
	if( newNode == NULL ) {
		printf("\n cannot allocate memory \n");
		return 0;
	} else {
		newNode->data = val;
		newNode->prev = NULL;
		newNode->next = NULL;
	}
	
	return newNode;
}

void show(node * head) {
	while( head != NULL ) {
		printf("%d ", head->data);
		head = head->next;
	}
}

void show_reverse(node * tail) {
	while( tail != NULL ) {
		printf("%d ", tail->data);
		tail = tail->prev;
	}
}

int main() {
	int val=1;
	node * head, * tail;
	head = tail = NULL;
	while( val != 0 ) {
		scanf("%d", &val);
		node * newNode = create(val);
		if( head == tail && head == NULL ) {
			head = newNode;
			head->next = NULL;
			tail = head;
			tail->next = NULL;
		} else {
			// node * temp = tail;
			tail->next = newNode;
			newNode->prev = tail;
			tail = newNode;
			// tail->prev = temp;
			// tail->next = NULL;
		}
	}
	
//	show(head);
	show_reverse(tail);
	return 0;
}
