#include <stdio.h>

int main(void)
{
	int first = 1, second = 2, number = 0, sum = 2;

	while(number <= 4000000)
	{
		number = first + second;
		if(number > 4000000-1)
			break;
		if(!(number%2))
		{
			sum += number;
		}
		first = second;
		second = number;
	}

	printf("\n sum=%d\n", sum);
	return 0;
}
