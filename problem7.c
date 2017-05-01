#include <stdio.h>

int isPrime(int num)
{

	int check = 0, temp_num = 0, counter = 0, i = 0;
	if(num==1)
		return 1;
	if(num==2)
		return 1;
	if(num<1)
		return 0;

	for(i=2; i<num; i++)
	{
		if(!(num%i))
			return 0;
	}

	return 1;

}


int main(void)
{
	int num = 1, counter = 0;
	while(counter<10001)
	{
		if(isPrime(num))
			counter++;
		num++;
	}
	printf("number is %d\n", num-1);
	return 0;
}
