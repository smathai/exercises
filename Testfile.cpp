//Test

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b)
{
	int temp;
	
	temp = *a; *a=*b;*b=temp;
	
}

int main (int argc, char *argv[])

{
 int a=1, b=2, c=11,i;
 int g[2];
 g[0]=1;
 g[1]=2;

 srand(time(0));
 //g[2]=3;
// a ^= b ^= a ^= b;
// b ^= a;
// a ^= b;
 swap(&a, &b);
 c= c/2;
 printf("%d %d %lu %d\n", a, b,sizeof(g),a);

 int *arr;
 int size=rand()%200;
 arr = (int *)malloc(sizeof(int)*size);

 printf("size %d, array %lu\n", size, sizeof(arr));
 
 for (i=0;i<100;i++)
 {
 	printf("%d ", rand()%100);
 }

 free(arr);
 return 0;
}
