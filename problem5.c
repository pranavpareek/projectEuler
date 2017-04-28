#include <stdio.h>

int main(void)
{
	int check = 0, j = 1, num = 21;
	while(check==0)
	{
		for(j=1; j<21; j++)
		{
			if(num%j)
			{
				num++;
				check = 0;
				break;
			}
			check = 1;
		}
	}
	printf("Number is: %d\n", num);
	return 0;
}
