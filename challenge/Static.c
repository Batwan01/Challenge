#include <stdio.h>
void test(int *i)
{
	*i = 50;
}
int main()
{
	static int i;

	test(&i);
	printf("%d", i);
}