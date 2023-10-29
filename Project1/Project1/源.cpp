#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)

#include<stdio.h>
int main()
{
	int ans = 1;
	int base = 2023;
	int m = 37;
	int b = 2021;
	while (b > 0)
	{
		if (b & 1)
		{
			ans *= base;
			ans %= m;
		}

		base *= base;
		base %= m;
		b >>= 1;
	}
	printf("%d", ans);

	return 0;
}