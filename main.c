#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int DataSize = 1000;

int main(void) {
	int DP[1001];
	int input;
	DP[0] = 0;
	DP[1] = 1;
	DP[2] = 2;
	for (int i = 3; i < DataSize + 1; i++)
	{
		DP[i] = (DP[i - 1] + DP[i - 2]) % 10007;
	}
	scanf("%d", &input);
	printf("%d", DP[input]);

	return 0;
}