#include<stdio.h>
#include"sort.dat"

int cout1 = 0;
int cout2 = 0;

void merge(int *A, int left, int mid, int right) {
	int i = left;
	int j = mid + 1;
	int k = 0;
	int B[10000];

	while (i <= mid && j <= right) {
		if (A[i] <= A[j]) {
				B[k] = A[i];
				i++;
		} else {
				B[k] = A[j];
				j++;
		}
		k++;
	}

	if (i == mid+1) {
		while (j <= right) {
			B[k] = A[j];
			j++;
			k++;
			cout1++;
		}
	} else {
		while(i <= mid) {
			B[k] = A[i];
			i++;
			k++;
			cout2++;
		}
	}

	k = 0;
	for (i=left; i<right+1; i++) {
		A[i] = B[k];
		k++;
	}

}

void merge_sort(int *A, int left, int right) {
	if (left == right) {
		return;
	}

	int mid = (left + right) / 2;

	merge_sort(A, left, mid);
	merge_sort(A, mid+1, right);
	merge(A, left, mid, right);
}

main() {
	int A[10000];
	int i, n;

	n = 1000;
	for (i=0; i<n; i++) {
		A[i] = A01[i];
	}
	merge_sort(A, 0, n-1);
	printf("A01\n");
	printf("A01 Computational ComplexitySum : %d\n\n\n", cout1+cout2);

	
	cout1 = 0;
	cout2 = 0;
	n = 2000;
	for (i=0; i<n; i++) {
		A[i] = A02[i];
	}
	merge_sort(A, 0, n-1);
	printf("A02\n");
	printf("A02 Computational ComplexitySum : %d\n\n\n", cout1+cout2);

	
	cout1 = 0;
	cout2 = 0;
	n = 3000;
	for (i=0; i<n; i++) {
		A[i] = A03[i];
	}
	merge_sort(A, 0, n-1);
	printf("A03\n");
	printf("A03 Computational ComplexitySum : %d\n\n\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 4000;
	for (i=0; i<n; i++) {
		A[i] = A04[i];
	}
	merge_sort(A, 0, n-1);
	printf("A04\n");
	printf("A04 Computational ComplexitySum : %d\n\n\n", cout1+cout2);

	cout1 = 0;
	cout2 = 0;
	n = 5000;
	for (i=0; i<n; i++) {
		A[i] = A05[i];
	}
	merge_sort(A, 0, n-1);
	printf("A05\n");
	printf("A05 Computational ComplexitySum : %d\n\n\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 6000;
	for (i=0; i<n; i++) {
		A[i] = A06[i];
	}
	merge_sort(A, 0, n-1);
	printf("A06\n");
	printf("A06 Computational ComplexitySum : %d\n\n\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 7000;
	for (i=0; i<n; i++) {
		A[i] = A07[i];
	}
	merge_sort(A, 0, n-1);
	printf("A07\n");
	printf("A07 Computational ComplexitySum : %d\n\n\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 8000;
	for (i=0; i<n; i++) {
		A[i] = A08[i];
	}
	merge_sort(A, 0, n-1);
	printf("A08\n");
	printf("A08 Computational ComplexitySum : %d\n\n\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 9000;
	for (i=0; i<n; i++) {
		A[i] = A09[i];
	}
	merge_sort(A, 0, n-1);
	printf("A09\n");
	printf("A09 Computational ComplexitySum : %d\n\n\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 10000;
	for (i=0; i<n; i++) {
		A[i] = A10[i];
	}
	merge_sort(A, 0, n-1);
	printf("A10\n");
	printf("A10 Computational ComplexitySum : %d\n\n\n", cout1+cout2);
	

	return 0;
}
