#include<stdio.h>

int D10[] = {484, 33, 506, 623, 560, 606, 477, 808, 521, 298};
int D20[] = {52, 422, 587, 484, 54, 16, 100, 163, 538, 291, 562, 980, 924, 873, 294, 613, 952, 482, 117, 780};
int D30[] = {820, 436, 557, 963, 828, 525, 457, 753, 318, 990, 878, 529, 37, 555, 848, 787, 268, 234, 697, 275, 988, 691, 670, 21, 737, 200, 902, 884, 53, 483};
int D40[] = {911, 471, 964, 683, 224, 634, 841, 837, 39, 405, 758, 373, 402, 396, 385, 774, 864, 328, 384, 540, 820, 196, 350, 178, 237, 651, 219, 907, 667, 346, 467, 506, 720, 568, 763, 854, 829, 998, 509, 452};
int D50[] = {149, 441, 321, 107, 319, 140, 757, 786, 881, 879, 487, 648, 229, 908, 206, 327, 891, 179, 49, 722, 554, 405, 271, 52, 546, 659, 276, 467, 334, 378, 90, 973, 232, 241, 287, 25, 856, 357, 108, 351, 772, 299, 347, 972, 195, 502, 846, 65, 239, 101};
int D60[] = {774, 371, 688, 226, 559, 2, 25, 815, 87, 370, 357, 620, 653, 38, 205, 626, 32, 828, 588, 414, 915, 964, 924, 251, 77, 447, 548, 150, 36, 710, 493, 539, 898, 480, 948, 708, 504, 846, 146, 175, 929, 30, 625, 143, 364, 161, 901, 587, 832, 744, 955, 816, 549, 53, 747, 650, 211, 295, 323, 933};
int D70[] = {508, 559, 347, 725, 243, 757, 267, 942, 316, 50, 317, 5, 949, 716, 312, 103, 489, 53, 279, 582, 805, 818, 729, 499, 939, 32, 533, 759, 877, 81, 149, 606, 662, 276, 379, 612, 510, 615, 746, 773, 105, 904, 4, 528, 997, 727, 472, 127, 126, 114, 15, 198, 983, 463, 735, 420, 2, 461, 200, 732, 958, 70, 611, 823, 644, 171, 343, 383, 345, 233};
int D80[] = {73, 694, 265, 193, 33, 430, 615, 984, 55, 725, 165, 736, 980, 944, 394, 700, 366, 13, 829, 965, 912, 695, 277, 163, 299, 679, 792, 350, 373, 77, 706, 678, 605, 786, 6, 496, 391, 841, 798, 533, 775, 232, 266, 513, 29, 305, 751, 843, 910, 79, 993, 161, 920, 313, 234, 201, 363, 292, 300, 155, 110, 485, 134, 557, 45, 340, 251, 177, 602, 402, 818, 370, 839, 631, 506, 737, 139, 487, 997, 718};
int D90[] = {977, 217, 682, 202, 166, 236, 59, 437, 820, 543, 571, 315, 917, 608, 13, 901, 620, 607, 218, 191, 740, 372, 87, 846, 546, 42, 466, 603, 279, 963, 532, 709, 463, 237, 897, 48, 558, 306, 211, 996, 312, 829, 436, 227, 536, 293, 272, 393, 773, 898, 645, 594, 361, 123, 538, 738, 2, 404, 505, 781, 137, 124, 403, 174, 146, 609, 104, 118, 998, 150, 196, 105, 999, 358, 641, 16, 755, 396, 474, 811, 305, 550, 453, 295, 64, 9, 200, 493, 258, 300};
int D100[] = {744, 734, 851, 672, 312, 814, 42, 847, 100, 282, 30, 742, 98, 266, 587, 659, 278, 553, 529, 448, 700, 190, 564, 374, 142, 579, 431, 671, 915, 19, 883, 603, 845, 906, 938, 122, 637, 104, 150, 811, 600, 235, 613, 330, 732, 798, 3, 540, 877, 988, 535, 684, 584, 169, 897, 827, 796, 468, 683, 648, 313, 945, 737, 788, 203, 56, 91, 874, 13, 424, 208, 29, 417, 987, 59, 550, 476, 306, 106, 633, 382, 240, 608, 803, 380, 49, 322, 509, 216, 675, 928, 617, 825, 832, 999, 821, 527, 259, 495, 109};

void selection_sort(int *A, int n) {
	int i;
	int j;
	int min;
	int tmp;

	for (i = 0; i < n-1; i++) {
		min = i;
		for (j = i+1; j < n; j++) {
			if (A[j] < A[min]) {
				min = j;
			}
		}
		tmp = A[i];
		A[i] = A[min];
		A[min] = tmp;
	}
}

void bubble_sort(int *A, int n) {
	int i;
	int j;
	int tmp;
	
	for(i = 0; i < n-1; i++) {
		for (j = n-1; j < i; j--) {
			if (A[j-1] > A[j]) {
				tmp = A[j];
				A[j] = A[j-1];
				A[j-1] = tmp;
			}
		}
	}
}

void insertion_sort(int *A, int n) {
	int i;
	int j;
	int tmp;

	for (i = 1; i < n; i++) {
		tmp = A[i];
		j = i - 1;
		while (j >= 0 && tmp < A[j]) {
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = tmp;
	}
}

main() {
	int A[100];
	int i;

	for (i=0; i<10; i++) {
		A[i] = D10[i];
	}
	selection_sort(A, 10);
	printf("D10-selection\n");
	for (i=0; i<10; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<20; i++) {
		A[i] = D20[i];
	}
	selection_sort(A, 20);
	printf("D20-selection\n");
	for (i=0; i<20; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<30; i++) {
		A[i] = D30[i];
	}
	selection_sort(A, 30);
	printf("D30-selection\n");
	for (i=0; i<30; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<40; i++) {
		A[i] = D40[i];
	}
	selection_sort(A, 40);
	printf("D40-selection\n");
	for (i=0; i<40; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<50; i++) {
		A[i] = D50[i];
	}
	selection_sort(A, 50);
	printf("D50-selection\n");
	for (i=0; i<50; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<60; i++) {
		A[i] = D60[i];
	}
	selection_sort(A, 60);
	printf("D60-selection\n");
	for (i=0; i<60; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<70; i++) {
		A[i] = D70[i];
	}
	selection_sort(A, 70);
	printf("D70-selection\n");
	for (i=0; i<70; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<80; i++) {
		A[i] = D80[i];
	}
	selection_sort(A, 80);
	printf("D80-selection\n");
	for (i=0; i<80; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<90; i++) {
		A[i] = D90[i];
	}
	selection_sort(A, 90);
	printf("D90-selection\n");
	for (i=0; i<90; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<100; i++) {
		A[i] = D100[i];
	}
	selection_sort(A, 100);
	printf("D100-selection\n");
	for (i=0; i<100; i++) {
		printf("%d,", A[i]);
	}
	printf("\n\n\n");

	
	for (i=0; i<10; i++) {
		A[i] = D10[i];
	}
	bubble_sort(A, 10);
	printf("D10-bubble\n");
	for (i=0; i<10; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<20; i++) {
		A[i] = D20[i];
	}
	bubble_sort(A, 20);
	printf("D20-bubble\n");
	for (i=0; i<20; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<30; i++) {
		A[i] = D30[i];
	}
	bubble_sort(A, 30);
	printf("D30-bubble\n");
	for (i=0; i<30; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<40; i++) {
		A[i] = D40[i];
	}
	bubble_sort(A, 40);
	printf("D40-bubble\n");
	for (i=0; i<40; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<50; i++) {
		A[i] = D50[i];
	}
	bubble_sort(A, 50);
	printf("D50-bubble\n");
	for (i=0; i<50; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<60; i++) {
		A[i] = D60[i];
	}
	bubble_sort(A, 60);
	printf("D60-bubble\n");
	for (i=0; i<60; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<70; i++) {
		A[i] = D70[i];
	}
	bubble_sort(A, 70);
	printf("D70-bubble\n");
	for (i=0; i<70; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<80; i++) {
		A[i] = D80[i];
	}
	bubble_sort(A, 80);
	printf("D80-bubble\n");
	for (i=0; i<80; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<90; i++) {
		A[i] = D90[i];
	}
	bubble_sort(A, 90);
	printf("D90-bubble\n");
	for (i=0; i<90; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<100; i++) {
		A[i] = D100[i];
	}
	bubble_sort(A, 100);
	printf("D100-bubble\n");
	for (i=0; i<100; i++) {
		printf("%d,", A[i]);
	}
	printf("\n\n\n");	


	for (i=0; i<10; i++) {
		A[i] = D10[i];
	}
	insertion_sort(A, 10);
	printf("D10-insertion\n");
	for (i=0; i<10; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<20; i++) {
		A[i] = D20[i];
	}
	insertion_sort(A, 20);
	printf("D20-insertion\n");
	for (i=0; i<20; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<30; i++) {
		A[i] = D30[i];
	}
	insertion_sort(A, 30);
	printf("D30-insertion\n");
	for (i=0; i<30; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<40; i++) {
		A[i] = D40[i];
	}
	insertion_sort(A, 40);
	printf("D40-insertion\n");
	for (i=0; i<40; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<50; i++) {
		A[i] = D50[i];
	}
	insertion_sort(A, 50);
	printf("D50-insertion\n");
	for (i=0; i<50; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<60; i++) {
		A[i] = D60[i];
	}
	insertion_sort(A, 60);
	printf("D60-insertion\n");
	for (i=0; i<60; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<70; i++) {
		A[i] = D70[i];
	}
	insertion_sort(A, 70);
	printf("D70-insertion\n");
	for (i=0; i<70; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<80; i++) {
		A[i] = D80[i];
	}
	insertion_sort(A, 80);
	printf("D80-insertion\n");
	for (i=0; i<80; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<90; i++) {
		A[i] = D90[i];
	}
	insertion_sort(A, 90);
	printf("D90-insertion\n");
	for (i=0; i<90; i++) {
		printf("%d,", A[i]);
	}
	printf("\n");
	for (i=0; i<100; i++) {
		A[i] = D100[i];
	}
	insertion_sort(A, 100);
	printf("D100-insertion\n");
	for (i=0; i<100; i++) {
		printf("%d,", A[i]);
	}
	printf("\n\n\n");	

	return 0;
}
