#include <stdio.h>

int main(void)
{
	int i = 0, j = 0, k = 1;

	for(k=1; k<101; k++)
	{
		i += k*k;
		j += k;
	}
	j = j*j;

	printf("Difference is: %d\n", j-i);
	
	return 0;
}
