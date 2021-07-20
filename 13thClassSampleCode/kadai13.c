#include<stdio.h>
#define N 8

int E[N][N] = {
	{0,3,2,0,0,0,0,0},
	{3,0,0,1,0,0,0,0},
	{2,0,0,1,1,5,1,0},
	{0,1,1,0,0,1,0,0},
	{0,0,1,0,0,0,2,0},
	{0,0,5,1,0,0,4,2},
	{0,0,1,0,2,4,0,4},
	{0,0,0,0,0,2,4,0}
};

int D[N];
int U[N];
int R[N];


void djikstra(int s) {
	int i;
	int flag = 0;
	int p;
	int min = 100000;	

	for (i=0; i<N; i++) {
		U[i] = 0;
		D[i] = 10000;
	}
	D[s] = 0;
	while(1) {
		
		for (i=0; i<N; i++) {
			if (U[i] == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			break;
		}

		flag = 0;
		
		for (i=0; i<N; i++) {
			if (U[i] == 0 && min > D[i]) {
				min = D[i];
				p = i;
			}
		}

		min = 100000;

		U[p] = 1;

		for (i=0; i<N; i++) {
			if (E[p][i] != 0) {
				if (D[i] > D[p]+E[p][i]) {
					D[i] = D[p] + E[p][i];
				}
			}
		}
		
	}
}

main() {
	int i;
	
	djikstra(0);
		
	for (i=0; i<N; i++) {
		printf("%d\n", D[i]);
	}
	return 0;
}
