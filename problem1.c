#include <stdio.h>

int main(void)
{
	int num = 0, sum = 0;
	for(num = 0; num<1000; num++)
	{
		if(!(num%5) || !(num%3))
		{
			sum += num;
		}
	}

	printf("%d is the sum of multiples of 5 or 3\n", sum);

	return 0;
}
