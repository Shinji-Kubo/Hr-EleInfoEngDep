#include<stdio.h>
#define B 15
#define N 10
#define empty 0
#define occupied 1
#define deleted -1

typedef struct {
	int name;
	int state;
} BUKET;

BUKET H[B] = {};

void display() {
	int i;
	printf(" b:");
	for (i=0; i<B; i++) {
		printf("%3d", i);
	}
	printf("\n d:");
	for (i=0; i<B; i++) {
		if (H[i].state == 1) {
			printf("%3d", H[i].name);
		} else {
			printf("  ");
		}
	}
	printf("\n\n");
}

int h(int d, int count) {
	int b = d % B;
	return (b + count) % B;
}

void insert_hash(int d) {
	if (search_hash(d) != -1) {
		return;
	}
	int count = 0;
	int b = h(d, count);
	int init_b = b;
	do {
		if (H[b].state == 0 || H[b].state == -1) {
			H[b].name = d;
			H[b].state = 1;
			return;
		}
		count = count + 1;
		b = h(d, count);
	} while (b != init_b);
	return;	
}

int search_hash(int d) {
	int count = 0;
	int b = h(d, count);
	int init_b = b;
	do {
		if (H[b].state == 1) {
			if (H[b].name == d) {
				return b;
			}
		}
		else if (H[b].state == 0) {
			return -1;
		}
		count = count + 1;
		b = h(d, count);
	} while (b != init_b);
	return -1;
}

void delete_hash(int d) {
	int b = search_hash(d);
	if (b == -1) {
		return;
	}
	H[b].state = -1;
	return;
}

main(void) {
	int D[] = {9,20,17,2,11,23,6,35,74,53};

	int i;
	for (i=0; i<B; i++) {
		H[i].state = 0;
	}

	for (i=0; i<N; i++) {
		insert_hash(D[i]);
	}

	display();

	delete_hash(53);
	display();

	insert_hash(29);
	display();

	return 0;
}
