#include<stdio.h>
#include<string.h>

typedef struct {
	char name[11];
	int point;
} TEAM;

TEAM data[] = {{"Apple",32},{"Pear",12},{"Strawberry",28},{"Melon",5},{"Orange",32},{"Peach",16},{"Mango",12},{"Pineapple", 32}};

int partition(TEAM *A, int pivot, int left, int right) {
	
	TEAM tmp;

	strcpy(tmp.name, A[right].name);
	tmp.point = A[right].point;
	strcpy(A[right].name, A[pivot].name);
	A[right].point = A[pivot].point;
	strcpy(A[pivot].name, tmp.name);
	A[pivot].point = tmp.point;

	int l = left;
	int r = right - 1;
	while(1){
		while(A[l].point < A[right].point) {
			l++;
		}
		while(l <= r && A[r].point >= A[right].point) {
			r = r - 1;
		}
		if (l < r) {
			tmp = A[l];
			A[l] = A[r];
			A[r] = tmp;
		} else {
			break;
		}
	}
	
	strcpy(tmp.name, A[l].name);
	tmp.point = A[l].point;
	strcpy(A[l].name, A[right].name);
	A[l].point = A[right].point;
	strcpy(A[right].name, tmp.name);
	A[right].point = tmp.point;

	return l;
}

void quick_sort(TEAM *A, int left, int right) {

	int pivot;	
	int p;

	if (left < right) {
		pivot = (left + right) / 2;
		p = partition(A, pivot, left, right);
		quick_sort(A, left, p-1);
		quick_sort(A, p+1, right);
	}
}


void merge(TEAM *A, int left, int mid, int right) {
	int i = left;
	int j = mid + 1;
	int k = 0;
	TEAM B[8];

	while (i <= mid && j <= right) {
		if (A[i].point <= A[j].point) {
				strcpy(B[k].name, A[i].name);
				B[k].point = A[i].point;
				i++;
		} else {
				strcpy(B[k].name, A[j].name);	
				B[k].point = A[j].point;
				j++;
		}
		k++;
	}

	if (i == mid+1) {
		while (j <= right) {
			strcpy(B[k].name, A[j].name);
			B[k].point = A[j].point;
			j++;
			k++;
		}
	} else {
		while(i <= mid) {
			strcpy(B[k].name, A[i].name);
			B[k].point = A[i].point;
			i++;
			k++;
		}
	}

	k = 0;
	for (i=left; i<right+1; i++) {
		strcpy(A[i].name, B[k].name);
		A[i].point = B[k].point;
		k++;
	}

}

void merge_sort(TEAM *A, int left, int right) {
	if (left == right) {
		return;
	}

	int mid = (left + right) / 2;

	merge_sort(A, left, mid);
	merge_sort(A, mid+1, right);
	merge(A, left, mid, right);
}

main() {
	TEAM A[8];
	int n, i;
	
	printf("--merge sort--\n");	
	n = 8;
	for (i=0; i<n; i++) {
		strcpy(A[i].name, data[i].name);
		A[i].point = data[i].point;
	}
	merge_sort(A, 0, n-1);
	for (i=0; i<n; i++) {
		printf("%s,%d\n", A[i].name, A[i].point);
	}
	
	printf("\n\n\n");
	
	printf("--quick sort--\n");	
	n = 8;
	for (i=0; i<n; i++) {
		strcpy(A[i].name, data[i].name);
		A[i].point = data[i].point;
	}
	quick_sort(A, 0, n-1);
	for (i=0; i<n; i++) {
		printf("%s,%d\n", A[i].name, A[i].point);
	}
	

	return 0;
}
