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
	if (node == 12) {
		return;
	}
}

void inorder(int node) {

}

void postorder(int node) {

}

main() {
	int start;
	start = 0;
	preorder(start);
	inorder(start);
	postorder(start);

	return 0;
}
