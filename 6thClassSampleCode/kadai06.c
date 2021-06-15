#include<stdio.h>
#include<stdlib.h>

typedef struct _hanoi {
	char from;
	char to;
	char sub;
	int m;
	struct _hanoi *next;
} HANOI;

void push (HANOI *headp, char from, char to, char sub, int m) {
	HANOI *new_stack = (HANOI *)malloc(sizeof(HANOI));
	new_stack->from = from;
	new_stack->to = to;
	new_stack->sub = sub;
	new_stack->m = m;
	new_stack->next = headp->next;
	headp->next = new_stack;	
}

HANOI pop(HANOI *headp) {
	if (headp->next == NULL) {
		exit(1);
	}
	HANOI *stack = headp->next;
	HANOI d;
	d.from = stack->from;
	d.to = stack->to;
	d.sub = stack->sub;
	d.m = stack->m;
	d.next = stack->next;
	headp->next = stack->next;
	free(stack);
	return d;
}

void hanoi(HANOI *headp, char from, char to, char sub, int m) {
	push(headp, from, to, sub, m);
	while(headp->next != NULL) {
		HANOI x = pop(headp);
		if (x.m == 1) {
			printf("%c -> %c\n", x.from, x.to);
		} else {
			push(headp, from, sub, to, x.m-1);
			push(headp, from, to, sub, 1);
			push(headp, sub, to, from, x.m-1);
		}
	}
}

main() {
	HANOI head={'\0','\0','\0',0,NULL};
	
	int m = 5;
	hanoi(&head, 'A', 'B', 'C', m);

	return 0;
}
