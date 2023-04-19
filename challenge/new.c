#include <stdio.h>
#include <stdlib.h>
int main()
{
	while (1) {
		int* new = (int*)malloc(sizeof(int) * 1000000000);
		if (new == NULL)
			printf("asdfghjhgfdsa");
		printf(".");
	}
	return 0;
}