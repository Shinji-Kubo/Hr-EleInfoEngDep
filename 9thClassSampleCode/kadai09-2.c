#include<stdio.h>
#define B 5
#define N 10

typedef struct {
	int name;
	struct BUKET *next;
} BUKET;

BUKET H[B] = {};

int h(int d) {
	int b = d % B;
	return b;
}



void insert_hash(int d) {
	int b = h(d);
	
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
