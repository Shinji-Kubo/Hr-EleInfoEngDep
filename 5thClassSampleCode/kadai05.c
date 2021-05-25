#include<stdio.h>
#include<stdlib.h>
#define ARRAYSIZE 100

typedef struct {
	char from;
	char to;
	char sub;
	int m;
} HANOI;

int top = 0;

void push(HANOI *STACK, char from, char to, char sub, int m) {
	if (top > ARRAYSIZE - 1) {
		exit(1);
	}
	(STACK+top)->from = from;
	(STACK+top)->to = to;
	(STACK+top)->sub = sub;
	(STACK+top)->m = m;
	++top;
}

HANOI *pop(HANOI *STACK) {
	if (top == 0) {
		exit(1);
	}
	--top;
	return (STACK+top);
}

void hanoi(HANOI *STACK, char from, char to, char sub, int m) {

	push(STACK, from, to, sub, m);

	while(top > 0) {
		HANOI x = *pop(STACK);
		if (x.m == 1) {
			printf("%c->%c\n", x.from, x.to);
		} else {
			push(STACK, from, sub, to, x.m-1);
			push(STACK, from, to, sub, 1);
			push(STACK, sub, to, from, x.m-1);
		}
	}
}

main() {
	HANOI STACK[ARRAYSIZE];

	int m = 5;
	hanoi(STACK, 'A', 'B', 'C', m);

	return 0;
}
