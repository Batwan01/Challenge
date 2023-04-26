#include <stdio.h>

void swap(char** paa, char** ppb) {
	char* pt;
	pt = *paa;
	*paa = *ppb;
	*ppb = pt;
}

int main(void) {
	char* pa = "hello";
	char* pb = "bye";
	printf("%s %s\n", pa, pb);
	swap(&pa, &pb);
	printf("%s %s", pa, pb);
}