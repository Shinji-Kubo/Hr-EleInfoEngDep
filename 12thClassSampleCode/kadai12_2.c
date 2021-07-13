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
	for (i=0; i<n; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	printf("A01 Computational Complexity1 : %d\n", cout1);
	printf("A01 Computational Complexity2 : %d\n", cout2);
	printf("A01 Computational ComplexitySum : %d\n\n\n", cout1+cout2);
	

	return 0;
}
