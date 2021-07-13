#include<stdio.h>

void merge(int *A, int left, int mid, int right) {
	int i = left;
	int j = mid + 1;
	int k = 0;	
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
