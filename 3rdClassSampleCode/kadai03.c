#include<stdio.h>

main() {
	//Variable Definitions
	int i;
	char cr[5];
	short st[5];
	int it[5];
	long lg[5];
	long long lglg[5];
	float ft[5];
	double de[5];

	//Address Output
	//char
	printf("char : ");
	for (i=0; i<5; i++) {
		printf("%p ", &cr[i]);
	}
	printf("\n");
	//short
	printf("short : ");
	for (i=0; i<5; i++) {
		printf("%p ", &st[i]);
	}
	printf("\n");
	///int
	printf("int : ");
	for (i=0; i<5; i++) {
		printf("%p ", &it[i]);
	}
	printf("\n");
	//long
	printf("long : ");
	for (i=0; i<5; i++) {
		printf("%p ", &lg[i]);
	}
	printf("\n");
	//long long
	printf("longlong : ");
	for (i=0; i<5; i++) {
		printf("%p ", &lglg[i]);
	}
	printf("\n");
	///float
	printf("float : ");
	for (i=0; i<5; i++) {
		printf("%p ", &ft[i]);
	}
	printf("\n");
	//double
	printf("double : ");
	for (i=0; i<5; i++) {
		printf("%p ", &de[i]);
	}
	printf("\n");

	return 0;
}
