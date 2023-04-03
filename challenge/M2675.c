#include <stdio.h>

int main()
{
	char S[20] = { 0, };
	int T = 0, R = 0, i, j, k;

	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%d %s", &R, S);
		for (j = 0; j < R; j++)
		{
			for (k = 0; k < R; k++)
			{
				printf("%c", S[j]);
			}
		}
		printf("\n");
	}
}