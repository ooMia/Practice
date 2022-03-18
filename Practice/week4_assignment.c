/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int N;
int data[1 + 100 + 1];
int* min = data;
int* max = data + N + 1;

void getInput() {
	while (!scanf(" %d", &N));
	for (int i = N; i > 0; --i)
		while (!scanf(" %d", &data[i]));
}

void foo(int n, int* arr)
{
	switch (n)
	{
	case 1: 
	case 2:
	default:
		break;
	}
}

void printResult()
{
	printf("min:%d max:%d", *min, *max);
}
*/