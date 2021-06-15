#include<stdio.h>
#include<stdlib.h>
#define N 100

typedef struct {
	char label;
	int left;
	int right;
} NODE;

int top = 0;

NODE tree[] = {{',',1,2},
		{'L',3,4},
		{'L',5,6},
		{'E',7,8},
		{'O',-1,-1},
		{'O',9,10},
		{'D',-1,11},
		{'H',-1,-1},
		{'L',-1,-1},
		{'W',-1,-1},
		{'R',-1,-1},
		{'!',-1,-1}};

void push(NODE *STACK, NODE *node) {
	if (top > N - 1) {
		exit(1);
	}
	(STACK+top)->label = node->label;
	(STACK+top)->left = node->left;
	(STACK+top)->right = node->right;
	top = top + 1;
}

NODE *pop(NODE *STACK) {
	if (top == 0) {
		exit(1);
	}
	top = top - 1;
	return (STACK+top);	
}

void preorder(NODE *STACK, int start) {
	push(STACK, &tree[start]);
	while(top != 0) {
		NODE x = *pop(STACK);
		printf("%c\n", x.label);
		if (x.right != -1) {
			push(STACK, &tree[x.right]);
		}
		if (x.left != -1) {
			push(STACK, &tree[x.left]);
		}
	}	
}

main(void) {
	NODE STACK[N];
	
	int start;
	start = 0;

	preorder(STACK, start);
	return 0;
}
