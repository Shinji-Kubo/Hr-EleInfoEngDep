#include<stdio.h>
#include<stdlib.h>
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
	int B[3];

	if (left < right) {
		B[0] = left;
		B[1] = (left + right) / 2;
		B[2] = right;
		pivot = median(A, B);	
		p = partition(A, pivot, left, right);
		quick_sort(A, left, p-1);
		quick_sort(A, p+1, right);
	}
}

void quick_sort_random(int *A, int left, int right) {

	int pivot;	
	int p;

	if (left < right) {
		pivot = left + rand() % (right - left);	
		p = partition(A, pivot, left, right);
		quick_sort(A, left, p-1);
		quick_sort(A, p+1, right);
	}
}

int median(int *A, int *B) {
	int i, j;
	int tmp;

	for (i=0; i<2; i++) {
		for (j=2; j>i; j--) {
			if (A[B[j-1]] > A[B[j]]) {
				tmp = B[j];
				B[j] = B[j-1];
				B[j-1] = tmp;
			}
		}
	}

	return B[1];
}

main() {
	int A[10000];
	int i, n;

	n = 1000;
	for (i=0; i<n; i++) {
		A[i] = A01[i];
	}
	quick_sort(A, 0, n-1);
	printf("A01_bubble Computational ComplexitySum : %d\n\n\n", cout1+cout2);

	
	cout1 = 0;
	cout2 = 0;
	n = 2000;
	for (i=0; i<n; i++) {
		A[i] = A02[i];
	}
	quick_sort(A, 0, n-1);
	printf("A02_bubble Computational ComplexitySum : %d\n\n\n", cout1+cout2);

	
	cout1 = 0;
	cout2 = 0;
	n = 3000;
	for (i=0; i<n; i++) {
		A[i] = A03[i];
	}
	quick_sort(A, 0, n-1);
	printf("A03_bubble Computational ComplexitySum : %d\n\n\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 4000;
	for (i=0; i<n; i++) {
		A[i] = A04[i];
	}
	quick_sort(A, 0, n-1);
	printf("A04_bubble Computational ComplexitySum : %d\n\n\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 5000;
	for (i=0; i<n; i++) {
		A[i] = A05[i];
	}
	quick_sort(A, 0, n-1);
	printf("A05_bubble Computational ComplexitySum : %d\n\n\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 6000;
	for (i=0; i<n; i++) {
		A[i] = A06[i];
	}
	quick_sort(A, 0, n-1);
	printf("A06_bubble Computational ComplexitySum : %d\n\n\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 7000;
	for (i=0; i<n; i++) {
		A[i] = A07[i];
	}
	quick_sort(A, 0, n-1);
	printf("A07_bubble Computational ComplexitySum : %d\n\n\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 8000;
	for (i=0; i<n; i++) {
		A[i] = A08[i];
	}
	quick_sort(A, 0, n-1);
	printf("A08_bubble Computational ComplexitySum : %d\n\n\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 9000;
	for (i=0; i<n; i++) {
		A[i] = A09[i];
	}
	quick_sort(A, 0, n-1);
	printf("A09_bubble Computational ComplexitySum : %d\n\n\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 10000;
	for (i=0; i<n; i++) {
		A[i] = A10[i];
	}
	quick_sort(A, 0, n-1);
	printf("A10_bubble Computational ComplexitySum : %d\n\n\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 1000;
	for (i=0; i<n; i++) {
		A[i] = A01[i];
	}
	quick_sort_random(A, 0, n-1);
	printf("A01_random Computational ComplexitySum : %d\n\n\n", cout1+cout2);

	
	cout1 = 0;
	cout2 = 0;
	n = 2000;
	for (i=0; i<n; i++) {
		A[i] = A02[i];
	}
	quick_sort_random(A, 0, n-1);
	printf("A02_random Computational ComplexitySum : %d\n\n\n", cout1+cout2);

	
	cout1 = 0;
	cout2 = 0;
	n = 3000;
	for (i=0; i<n; i++) {
		A[i] = A03[i];
	}
	quick_sort_random(A, 0, n-1);
	printf("A03_random Computational ComplexitySum : %d\n\n\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 4000;
	for (i=0; i<n; i++) {
		A[i] = A04[i];
	}
	quick_sort_random(A, 0, n-1);
	printf("A04_random Computational ComplexitySum : %d\n\n\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 5000;
	for (i=0; i<n; i++) {
		A[i] = A05[i];
	}
	quick_sort_random(A, 0, n-1);
	printf("A05_random Computational ComplexitySum : %d\n\n\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 6000;
	for (i=0; i<n; i++) {
		A[i] = A06[i];
	}
	quick_sort_random(A, 0, n-1);
	printf("A06_random Computational ComplexitySum : %d\n\n\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 7000;
	for (i=0; i<n; i++) {
		A[i] = A07[i];
	}
	quick_sort_random(A, 0, n-1);
	printf("A07_random Computational ComplexitySum : %d\n\n\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 8000;
	for (i=0; i<n; i++) {
		A[i] = A08[i];
	}
	quick_sort_random(A, 0, n-1);
	printf("A08_random Computational ComplexitySum : %d\n\n\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 9000;
	for (i=0; i<n; i++) {
		A[i] = A09[i];
	}
	quick_sort_random(A, 0, n-1);
	printf("A09_random Computational ComplexitySum : %d\n\n\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 10000;
	for (i=0; i<n; i++) {
		A[i] = A10[i];
	}
	quick_sort_random(A, 0, n-1);
	printf("A10_random Computational ComplexitySum : %d\n\n\n", cout1+cout2);

	return 0;
}
