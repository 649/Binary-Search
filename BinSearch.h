#ifndef BinSearch_h
#define BinSearch_h

long binSearch(long* list, long n, long val){

	int i = 0;
	while (i <= n) {
		int middle = (i + n) / 2;
		if (list[middle] == val)
			return middle;
		else if (list[middle] > val)
			n = middle - 1;
		else
			i = middle + 1;
	}
	return -1;
}
#endif