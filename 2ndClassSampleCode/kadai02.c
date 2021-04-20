#include<stdio.h>
#define MAX_SIZE 20

typedef struct {
	int n;
	int m;
	int tc;
	int gcd;
} table;

void euclid(table *data, int len) {
	// Vatiable Definition
	int buf;
	int counter = 0;
	int m, n, r;

	n = (data+len)->n;
	m = (data+len)->m;

	if (n < m) {
		buf = n;
		n = m;
		m = buf;
	}
	while (m != 0) {
		r = n % m;
		n = m;
		m = r;
		counter++;
	}
	
	(data+len)->tc = counter;
	(data+len)->gcd = n;
}

main() {

	//Variable Definition
	table data[MAX_SIZE];
	FILE *fpin, *fpout;
	int len, i, flag;
	char fi[] = "table.txt";
	char fo[] = "output.txt";
	char buf[256];

	//File Reading
	if ((fpin = fopen(fi, "r")) == NULL) {
		printf("%s is not found\n", fi);
		return 1;
	}
	len = 0;
	for (i=0; i<6; i++) {
		fscanf(fpin, "%s", buf);
	}
	flag = fscanf(fpin, " %d %d", &data[len].n, &data[len].m);
	while (flag != EOF && len < MAX_SIZE) {
		len++;
		flag = fscanf(fpin, " %d %d", &data[len].n, &data[len].m);
	}
	fclose(fpin);

	// Alg Run
	for (i=0; i<len; i++) {
		euclid(data, i);
	}

	// File Writing
	if ((fpout = fopen(fo, "w")) == NULL) {
		printf("%s is not found.\n", fo);
		return 1;
	}

	fprintf(fpout, "-----------------------------------\n");
	fprintf(fpout, " n m 時間計算量 GCD\n");
	fprintf(fpout, "-----------------------------------\n");
	for (i=0; i<len; i++) {
		fprintf(fpout, " %d %d %d %d\n", data[i].n, data[i].m, data[i].tc, data[i].gcd);
	}
	fclose(fpout);

	return 0;
}
