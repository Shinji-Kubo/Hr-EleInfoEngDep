#include<stdio.h>

main() {
	//Variable Definitions
	int it[5][5];
	int i, j;

	//Address Output
	for (i=0; i<5; i++) {
		for (j=0; j<5; j++) {
			printf("%p ", &it[i][j]);
		}
		printf("\n");
	}

	return 0;
}
