#include<stdio.h>
#include<stdlib.h>

typedef struct _cell {
	char *data;
	struct _cell *next;
} CELL;

void insert_cell(CELL *p, char *d) {
	CELL *new_cell = (CELL *)malloc(sizeof(CELL));
	new_cell->data = d;
	new_cell->next = p->next;
	p->next = new_cell;
}

void delete_cell(CELL *p) {
	CELL *q = p->next;
	p->next = q->next;
	free(q->next);
}

void print_cell_all(CELL *p) {
	while(1) {
		printf("%p\n", p);
		printf("%s\n", p->data);
		if (p->next != NULL) {
			p = p->next;
		} else {
			break;
		}
	}
}

main() {
	CELL head = {"", NULL};

	insert_cell(&head, "Apple");
	insert_cell(&head, "Orange");
	insert_cell(&head, "Grape");
	insert_cell(&head, "Strawberry");
	insert_cell(&head, "Banana");

	print_cell_all(head.next);

	delete_cell(&head);

	print_cell_all(head.next);

	return 0;
}