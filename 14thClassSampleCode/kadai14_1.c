#include<stdio.h>
#define N 10
#define M 140

int G[N+1][M+1];
int S[N+1][M+1][N+1];
int v[] = {0,64,70,73,27,30,68,41,94,84,14};
int w[] = {0,35,82,6,4,97,32,56,48,13,24};

void knapsack(int n, int C) {
	int i, j, k, v1;

	for (k=0; k<=n; k++) {
		for (i=0; i<=C; i++) {
			G[k][i] = 0;
			for (j=0; j<=n; j++) {
				S[k][i][j] = 0;
			}
		}
	}

	for (k=1; k<=n; k++) {
		for (i=1; i<=C; i++) {
			if (i < w[k]) {
				G[k][i] = G[k-1][i];
				for (j=1; j<=n; j++) {
					S[k][i][j] = S[k-1][i][j];
				}
			} else {
				v1 = G[k-1][i-w[k]] + v[k];
				if (G[k-1][i] < v1) {
					G[k][i] = v1;
					for (j=0; j<=n; j++) {
						S[k][i][j] = S[k-1][i-w[k]][j];
					}
					S[k][i][k] = 1;
				} else {
					G[k][i] = G[k-1][i];
					for (j=0; j<=n; j++) {
						S[k][i][j] = S[k-1][i][j];
					}
				}
			}
		}
	}
}

main() {
	int i, j, k, cnt = 1;

	knapsack(10, 140);
	
	for (i=1; i<=N; i++) {
		for (j=1; j<=M; j++) {
			printf("%d {", G[i][j]);
			for (k=1; k<=N; k++) {
				if (S[i][j][k] == 1) {
					printf("%d ", k);
				}
			}
			printf("}, ");
		}
		printf("\n");
	}

	return 0;
}
