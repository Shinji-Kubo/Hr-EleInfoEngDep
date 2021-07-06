#include<stdio.h>
#include"sort.dat"

int cout1 = 0;
int cout2 = 0;

int partition(int *A, int pivot, int left, int right) {
	
	int tmp;

	tmp = A[right];
	A[right] = A[pivot];
	A[pivot] = tmp;

	int l = left;
	int r = right - 1;
	while(1){
		while(A[l] < A[right]) {
			l++;
			cout1++;
		}
		while(l <= r && A[r] >= A[right]) {
			r = r - 1;
			cout2++;
		}
		if (l < r) {
			tmp = A[l];
			A[l] = A[r];
			A[r] = tmp;
		} else {
			break;
		}
	}
	tmp = A[l];
	A[l] = A[right];
	A[right] = tmp;

	return l;
}

void quick_sort(int *A, int left, int right) {

	int pivot;	
	int p;

	if (left < right) {
		pivot = left;
		p = partition(A, pivot, left, right);
		quick_sort(A, left, p-1);
		quick_sort(A, p+1, right);
	}
}

main() {
	int A[10000];
	int i, n;

	n = 1000;
	for (i=0; i<n; i++) {
		A[i] = A01[i];
	}
	quick_sort(A, 0, n-1);
	printf("A01\n");
	for (i=0; i<n; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	printf("A01 Computationnal Complexity : %d\n", cout1);
	printf("A01 Computationnal Complexity : %d\n\n\n", cout2);

	
	cout1 = 0;
	cout2 = 0;
	n = 2000;
	for (i=0; i<n; i++) {
		A[i] = A02[i];
	}
	quick_sort(A, 0, n-1);
	printf("A02\n");
	for (i=0; i<n; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	printf("A02 Computationnal Complexity : %d\n", cout1);
	printf("A02 Computationnal Complexity : %d\n\n\n", cout2);

	
	cout1 = 0;
	cout2 = 0;
	n = 3000;
	for (i=0; i<n; i++) {
		A[i] = A03[i];
	}
	quick_sort(A, 0, n-1);
	printf("A03\n");
	for (i=0; i<n; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	printf("A03 Computationnal Complexity : %d\n", cout1);
	printf("A03 Computationnal Complexity : %d\n\n\n", cout2);


	cout1 = 0;
	cout2 = 0;
	n = 4000;
	for (i=0; i<n; i++) {
		A[i] = A04[i];
	}
	quick_sort(A, 0, n-1);
	printf("A04\n");
	for (i=0; i<n; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	printf("A04 Computationnal Complexity : %d\n", cout1);
	printf("A04 Computationnal Complexity : %d\n\n\n", cout2);


	cout1 = 0;
	cout2 = 0;
	n = 5000;
	for (i=0; i<n; i++) {
		A[i] = A05[i];
	}
	quick_sort(A, 0, n-1);
	printf("A05\n");
	for (i=0; i<n; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	printf("A05 Computationnal Complexity : %d\n", cout1);
	printf("A05 Computationnal Complexity : %d\n\n\n", cout2);


	cout1 = 0;
	cout2 = 0;
	n = 6000;
	for (i=0; i<n; i++) {
		A[i] = A06[i];
	}
	quick_sort(A, 0, n-1);
	printf("A06\n");
	for (i=0; i<n; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	printf("A06 Computationnal Complexity : %d\n", cout1);
	printf("A06 Computationnal Complexity : %d\n\n\n", cout2);


	cout1 = 0;
	cout2 = 0;
	n = 7000;
	for (i=0; i<n; i++) {
		A[i] = A07[i];
	}
	quick_sort(A, 0, n-1);
	printf("A07\n");
	for (i=0; i<n; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	printf("A07 Computationnal Complexity : %d\n", cout1);
	printf("A07 Computationnal Complexity : %d\n\n\n", cout2);


	cout1 = 0;
	cout2 = 0;
	n = 8000;
	for (i=0; i<n; i++) {
		A[i] = A08[i];
	}
	quick_sort(A, 0, n-1);
	printf("A08\n");
	for (i=0; i<n; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	printf("A08 Computationnal Complexity : %d\n", cout1);
	printf("A08 Computationnal Complexity : %d\n\n\n", cout2);


	cout1 = 0;
	cout2 = 0;
	n = 9000;
	for (i=0; i<n; i++) {
		A[i] = A09[i];
	}
	quick_sort(A, 0, n-1);
	printf("A09\n");
	for (i=0; i<n; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	printf("A09 Computationnal Complexity : %d\n", cout1);
	printf("A09 Computationnal Complexity : %d\n\n\n", cout2);


	cout1 = 0;
	cout2 = 0;
	n = 10000;
	for (i=0; i<n; i++) {
		A[i] = A10[i];
	}
	quick_sort(A, 0, n-1);
	printf("A10\n");
	for (i=0; i<n; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	printf("A10 Computationnal Complexity : %d\n", cout1);
	printf("A10 Computationnal Complexity : %d\n\n\n", cout2);

	return 0;
}
