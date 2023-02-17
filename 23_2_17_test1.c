#include <stdio.h>

#define Add(x, y) ((x) + (y))
int main()
{
	int sum = Add(2,4);
	printf("sum = %d\n",sum);
	sum = 10 * Add(2,5);
	printf("sum = %d\n",sum);
	return 0;
}
