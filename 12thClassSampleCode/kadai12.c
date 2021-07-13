#include<stdio.h>

void merge(int *A, int left, int mid, int right) {
	int i = left;
	int j = mid + 1;
	int k = 0;
	int *B;

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
		}
	} else {
		while(i <= mid) {
			B[k] = A[i];
			i++;
			k++;
		}
	}

	k = 0;
	for (i=left; i<right; i++) {
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

	return 0;
}
