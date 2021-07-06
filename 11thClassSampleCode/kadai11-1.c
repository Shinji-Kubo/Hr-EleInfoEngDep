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
	for (i=0; i<n; i++) {
		printf("%d\n", A[i]);
	}

	return 0;
}
