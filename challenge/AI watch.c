#include <stdio.h>

int main()
{
	int h, m, s, time;
	unsigned short t;
	scanf_s("%d %d %d %hd", &h, &m, &s, &t);
	time = h * 3600 + m * 60 + s + t;
	if (time >= 86400)
	{
		time = time - 86400;
		h = time / 3600;
		m = (time - h * 3600) / 60;
		s = time - m * 60;
		printf("%d %d %d", h, m, s);
	}
	else if (time < 86400)
	{
		h = time / 3600;
		m = (time - h * 3600) / 60;
		s = time - m * 60 - h * 3600;
		printf("%d %d %d", h, m, s);
	}
}