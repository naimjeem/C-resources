#include<stdio.h>
#include<malloc.h>

struct node {
	int data;
	node * left;
	node * right;
};

int index = 0;
int data[33] = { 1,2,3,4,-1,5,-1,-1,6,-1,-1,7,8,-1,-1,9,-1,-1,10,11,12,-1,-1,13,-1,-1,14,15,-1,-1,16,-1,-1 };

node * insert(  ) {
	int val;
	// scanf("%d", &val);
	index ++;
	val = data[index];
	printf(" %d <> %d \n", index, data[index]);
	if( val != -1 ) {
		node * new_node = (node *) malloc(sizeof(node));
		if( new_node == NULL ) {
			printf("\n Memory Allocation Failed \n");
			return 0;
		}
		new_node->left = insert();
		new_node->data = val;
		new_node->right = insert();
		return new_node;
	} else {
		return NULL;
	}
}

void show_in_order( node * head ) {
	if( head != NULL ) {
		show_in_order(head->left);
		printf("%d ", head->data);
		show_in_order(head->right);
	}
}

void show_pre_order( node * head ) {
	if( head != NULL ) {
		printf("%d ", head->data);
		show_pre_order(head->left);
		show_pre_order(head->right);
	}
}

void show_post_order( node * head ) {
	if( head != NULL ) {
		show_post_order( head->left );
		show_post_order( head->right );
		printf("%d ", head->data);
	}
}

int main() {
	node * head;
	head = insert();

	printf("\n Show Pre-order  : \n");
	show_pre_order(head);
	printf("\n");

	printf("\n Show In-order : \n");
	show_in_order(head);
	printf("\n");

	printf("\n Show Post-order : \n");
	show_post_order( head );
	printf("\n");

	return 0;
}
	
