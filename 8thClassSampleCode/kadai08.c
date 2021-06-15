#include<stdio.h>

typedef struct {
	char label;
	int left;
	int right;
} NODE;

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

void preorder(int node) {
	if (node == -1) {
		return;
	}
	printf("%c\n", tree[node].label);
	preorder(tree[node].left);
	preorder(tree[node].right);
}

void inorder(int node) {
	if (node == -1) {
		return;
	}
	inorder(tree[node].left);
	printf("%c\n", tree[node].label);
	inorder(tree[node].right);
}

void postorder(int node) {
	if(node == -1) {
		return;
	}
	postorder(tree[node].left);
	postorder(tree[node].right);
	printf("%c\n", tree[node].label);
}

main() {
	int start;
	start = 0;
	printf("------------preorder--------------\n");
	preorder(start);
	printf("------------inorder---------------\n");
	inorder(start);
	printf("------------postorder-------------\n");	
	postorder(start);

	return 0;
}
