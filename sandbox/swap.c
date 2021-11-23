#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

void swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = a;
}

int	main()
{
	int a, b;
	a = 2;
	b = 3;
	swap(a, b);
	printf("a = %d\n", a);	
	printf("b = %d\n", b);	
	return (0);
}
