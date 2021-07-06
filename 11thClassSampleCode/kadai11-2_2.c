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
	printf("A01_bubble\n");
	for (i=0; i<n; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");



	n = 1000;
	for (i=0; i<n; i++) {
		A[i] = A01[i];
	}
	quick_sort_random(A, 0, n-1);
	printf("A01_random\n");
	for (i=0; i<n; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");

	return 0;
}
