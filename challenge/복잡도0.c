#include <stdio.h>

void sort(int list[], int n) {
		for(int i; i< n-1;i++)
			for(int j=i+1; j<n;j++)
				if(list[j] < list[i])
}