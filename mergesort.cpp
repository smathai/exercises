#include <stdio.h>

void small_sort(int *a, int *b, 1 12 66 33 78
5 22 88 44 23
1 12 66 33 78
5 22 88 44 23
int s)
{
	int i=0;
	while (i<s){
		if (*b < *a)
		{
			int temp;
			temp = *b; *a = *b; *b = temp;
			b++;a++;
		}
		else
			a++;
		s++;
	}
}

void merge_sort (int *unsorted, int s)





//////
a=0;b=0; s=5;
1 12 66 33 78
5 22 88 44 23

a=1;b=0;
1 12 66 33 78
5 22 88 44 23

a=2;b=1
1 5 66 33 78
12 22 88 44 23
