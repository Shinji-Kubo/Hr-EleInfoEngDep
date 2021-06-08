#include<stdio.h>
#include<stdlib.h>
#define MAX 5
#define N 100

int front = 0;
int rear = 0;
int E[MAX+1][MAX+1] = {{0,1,1,0,0,0},
			{1,0,0,1,0,1},
			{1,0,0,1,1,0},
			{0,1,1,0,1,0},
			{0,0,1,1,0,1},
			{0,1,0,0,1,0}};

void enqueue(int *queue, int d) {
	if (rear > N-1) {
		exit(1);
	}
	*(queue+rear) = d;
	rear = rear + 1;
}

int dequeue(int *queue) {
	if (front == rear) {
		exit(1);
	}
	int x = *(queue+front);
	front = front + 1;
	return x;
}

void breadth_first_search(int *queue,int start) {
	int i;
	int j;
	int k;
	int V[MAX+1];
	
	for (k=0; k<=MAX; k++) {
		V[k] = 0;
	}

	enqueue(queue, start);
	V[start] = 1;
	while(front != rear) {
		i = dequeue(queue);
		printf("%d\n", i);
		for (j=0; j<=MAX; j++) {
			if(E[i][j] != 0 && V[j] == 0) {
				enqueue(queue, j);
				V[j] = 1;
			}
		}
	}
}

main() {

	int queue[N];
	int start = 0;

	breadth_first_search(queue, start);

	return 0;
}
