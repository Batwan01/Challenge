#include <stdio.h>

void plus(int i,int i1) {
	printf("++i,i++ : %d %d\n", i, i1);
}

void plus2(int i, int i1) {
	printf("i++,++i : %d %d", i, i1);
}

int main(void) {
	int i = 0;
	plus(++i, i++);

	i = 0;
	plus2(i++, ++i);
}