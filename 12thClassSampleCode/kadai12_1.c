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
	printf("1000 %d\n", cout1+cout2);

	
	cout1 = 0;
	cout2 = 0;
	n = 2000;
	for (i=0; i<n; i++) {
		A[i] = A02[i];
	}
	merge_sort(A, 0, n-1);
	printf("2000 %d\n", cout1+cout2);

	
	cout1 = 0;
	cout2 = 0;
	n = 3000;
	for (i=0; i<n; i++) {
		A[i] = A03[i];
	}
	merge_sort(A, 0, n-1);
	printf("3000 %d\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 4000;
	for (i=0; i<n; i++) {
		A[i] = A04[i];
	}
	merge_sort(A, 0, n-1);
	printf("4000 %d\n", cout1+cout2);

	cout1 = 0;
	cout2 = 0;
	n = 5000;
	for (i=0; i<n; i++) {
		A[i] = A05[i];
	}
	merge_sort(A, 0, n-1);
	printf("5000 %d\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 6000;
	for (i=0; i<n; i++) {
		A[i] = A06[i];
	}
	merge_sort(A, 0, n-1);
	printf("6000 %d\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 7000;
	for (i=0; i<n; i++) {
		A[i] = A07[i];
	}
	merge_sort(A, 0, n-1);
	printf("7000 %d\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 8000;
	for (i=0; i<n; i++) {
		A[i] = A08[i];
	}
	merge_sort(A, 0, n-1);
	printf("8000 %d\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 9000;
	for (i=0; i<n; i++) {
		A[i] = A09[i];
	}
	merge_sort(A, 0, n-1);
	printf("9000 %d\n", cout1+cout2);


	cout1 = 0;
	cout2 = 0;
	n = 10000;
	for (i=0; i<n; i++) {
		A[i] = A10[i];
	}
	merge_sort(A, 0, n-1);
	printf("10000 %d\n", cout1+cout2);
	
	

	return 0;
}
