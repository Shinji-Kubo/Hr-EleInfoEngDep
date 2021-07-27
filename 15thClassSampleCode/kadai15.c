#include<stdio.h>
#include<stdlib.h>
#define N 10

int A[] = {916,513,316,624,620,466,636,566,91,333};
int t = 1181;
int R[N+1];
int Y[N];

void subsetsum_bb(int level, int sum) {
	int i;

	if (sum == t) {
		printf("TRUE\n");
		exit(0);
	}

	if (sum <= t && sum+R[level+1] >= t && level != N) {		
		subsetsum_bb(level+1, sum);
		subsetsum_bb(level+1, sum+A[level]);
	}

	if (level == 0) {
		printf("FALSE\n");
		return;
	}
	
}

main() {
	int i;

	R[N] = A[N-1];
	for (i=N-1; i>0; i--) {
		R[i] = R[i+1] + A[i-1];
	}
	printf("10. ");
	subsetsum_bb(0, 0);

	return 0;
}
