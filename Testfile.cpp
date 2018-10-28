//Test

#include <stdio.h>

int main (int argc, char *argv[])

{
 int a=1, b=2, c=3,i;
 a ^= b ^= a ^= b;
// b ^= a;
// a ^= b;
 printf("%d %d %d %d\n", a, b,c,i);

 return 0;
}
