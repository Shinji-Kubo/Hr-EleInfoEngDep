#include<stdio.h>
#include<math.h>

// 1
int square(int x) {
	return x*x;
}

// 2
void psquare(int *x) {
	*x = *x * *x;
}

// 3
int max(int x, int y, int z) {
	if (x > y) {
		if (z > x) {
			return z;
		}
		else {
			return x;
		}
	} 
	else {
		if (z > y) {
			return z;
		}
		else {
			return y;
		}
	}
}

// 4
void swap(int *x, int *y) {
	int st;

	st = *x;
	*x = *y;
	*y = st;
}

// 5
float norm(float x, float y) {
	float x1 = x * x;
	float y1 = y * y;
	float plus = x1 + y1;
	return sqrt(plus);	
}

// 6
float inner_product(float *x, float *y) {
	float val1 = *x * *y;
	float val2 = *(x+1) * *(y+1);
	float val3 = *(x+2) * *(y+2);
	return val1 + val2 + val3;
}

main() {
	//VarDec
	int x1 = 5;
	int x2 = 5;
	int x3 = 5;
	int x4 = 6;
	int x5 = 7;
	int x6 = 1;
	int x7 = 2;
	float x8 = 3;
	float x9 = 4;
	float x10[] = {1, 2, 3};
	float x11[] = {4, 5, 6};
	int squareNum;
	int maxVal;
	float sizeofVec;
	float inner;

	// search size
	printf("Size of short: %ubyte\n", sizeof(short));	
	printf("Size of int: %ubyte\n", sizeof(int));	
	printf("Size of long: %ubyte\n", sizeof(long));	
	printf("Size of long long: %ubyte\n", sizeof(long long));	
	printf("Size of char: %ubyte\n", sizeof(char));	
	printf("Size of float: %ubyte\n", sizeof(float));	
	printf("Size of double: %ubyte\n", sizeof(double));	
	printf("Size of short *: %ubyte\n", sizeof(short *));	
	printf("Size of int *: %ubyte\n", sizeof(int *));	
	printf("Size of long *: %ubyte\n", sizeof(long *));	
	printf("Size of long long *: %ubyte\n", sizeof(long long *));	
	printf("Size of char *: %ubyte\n", sizeof(char *));	
	printf("Size of float *: %ubyte\n", sizeof(float *));	
	printf("Size of double *: %ubyte\n", sizeof(double *));

	//1	
	squareNum = square(x1);
	printf("Result of Square: %d\n", squareNum);

	//2
	psquare(&x2);
	printf("Result of Pointer Square: %d\n", x2);
	
	//3
	maxVal = max(x3, x4, x5);
	printf("Result of Max: %d\n", maxVal);

	//4
	swap(&x6, &x7);
	printf("Result of Swap: val1 - %d, val2 - %d\n", x6, x7);
	
	//5
	sizeofVec = norm(x8, x9);
	printf("Result of norm: %f\n", sizeofVec);			

	//6
	inner = inner_product(&x10, &x11);
	printf("Result of inner_product: %f\n", inner);

	return 0;
}
