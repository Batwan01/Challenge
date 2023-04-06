#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, len,count=0, p=0 , test;
	scanf("%d", &len);
	char* world = (char*)malloc(sizeof(char) * len);
	char* answer = (char*)malloc(sizeof(char) * len);
	scanf(" %[^\n]", world);
	for (i = len-1; i>=0; i--)
	{

		if (world[i] != 32)
		{
			count++;
		}
		else
		{
			for (j = p; j < p + count; j++)
			{
				answer[j] = world[i+1+j-p];
			}
			answer[j] = 32;
			p = j + 1;
			count = 0;
			for (test = 0; test < p; test++)
			{
				printf("%c", answer[test]);
			}
			printf("\n");
		}
	}
	for (j = p; j < p + count; j++)
	{
		answer[j] = world[i + 1 + j - p];
	}
	answer[j] = 32;
	p = j + 1;
	count = 0;
	for (i = 0; i < len; i++) {
		printf("%c", answer[i]);
	}
}